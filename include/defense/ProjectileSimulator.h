#pragma once
#include <vector>

namespace defense {
namespace physics {

class ProjectileSimulator {
public:
    ProjectileSimulator();
    ~ProjectileSimulator();

    void setParameters(double velocity, double angle, double mass, double dragCoeff);
    void runSimulation(double duration, double timestep);

    const std::vector<std::pair<double,double>>& getTrajectory() const;

private:
    double m_velocity;
    double m_angle;
    double m_mass;
    double m_dragCoeff;

    std::vector<std::pair<double,double>> m_trajectory;
};

} // namespace physics
} // namespace defense
