#pragma once
#include <vector>
#include <array>

namespace defense {
namespace physics {

class OrbitSimulator {
public:
    OrbitSimulator();
    ~OrbitSimulator();

    void setOrbitalParams(double semiMajorAxis, double eccentricity, double inclination);
    void runSimulation(double duration, double timestep);

    const std::vector<std::array<double,3>>& getOrbitPath() const;

private:
    double m_semiMajorAxis;
    double m_eccentricity;
    double m_inclination;

    std::vector<std::array<double,3>> m_orbitPath;
};

} // namespace physics
} // namespace defense
