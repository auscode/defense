#include "defense/OrbitSimulator.h"

namespace defense {
namespace physics {

OrbitSimulator::OrbitSimulator()
    : m_semiMajorAxis(7000e3), m_eccentricity(0.0), m_inclination(0.0) {}

OrbitSimulator::~OrbitSimulator() {}

void OrbitSimulator::setOrbitalParams(double semiMajorAxis, double eccentricity, double inclination) {
    m_semiMajorAxis = semiMajorAxis;
    m_eccentricity = eccentricity;
    m_inclination = inclination;
}

void OrbitSimulator::runSimulation(double duration, double timestep) {
    m_orbitPath.clear();

    // TODO: Add real orbital mechanics integration
    for (double t = 0.0; t <= duration; t += timestep) {
        double x = m_semiMajorAxis * std::cos(t);
        double y = m_semiMajorAxis * std::sin(t);
        double z = 0.0; // ignore inclination for now
        m_orbitPath.push_back({x, y, z});
    }
}

const std::vector<std::array<double,3>>& OrbitSimulator::getOrbitPath() const {
    return m_orbitPath;
}

} // namespace physics
} // namespace defense
