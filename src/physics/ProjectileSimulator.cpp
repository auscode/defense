#include "defense/ProjectileSimulator.h"
#include <cmath>

namespace defense {
namespace physics {

ProjectileSimulator::ProjectileSimulator()
    : m_velocity(0.0), m_angle(0.0), m_mass(1.0), m_dragCoeff(0.0) {}

ProjectileSimulator::~ProjectileSimulator() {}

void ProjectileSimulator::setParameters(double velocity, double angle, double mass, double dragCoeff) {
    m_velocity = velocity;
    m_angle = angle;
    m_mass = mass;
    m_dragCoeff = dragCoeff;
}

void ProjectileSimulator::runSimulation(double duration, double timestep) {
    m_trajectory.clear();

    // TODO: Add proper physics simulation (Euler/Runge-Kutta)
    for (double t = 0.0; t <= duration; t += timestep) {
        double x = m_velocity * std::cos(m_angle) * t;
        double y = m_velocity * std::sin(m_angle) * t - 0.5 * 9.81 * t * t;
        if (y < 0) y = 0; // ground
        m_trajectory.push_back({x, y});
    }
}

const std::vector<std::pair<double,double>>& ProjectileSimulator::getTrajectory() const {
    return m_trajectory;
}

} // namespace physics
} // namespace defense
