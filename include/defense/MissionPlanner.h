#pragma once

#include <vector>
#include <utility> // for std::pair

namespace defense {

class MissionPlanner {
public:
    MissionPlanner();

    // Plan a basic intercept between projectile and orbit
    // returns success/failure
    bool planIntercept(double projectileVelocity, double targetAltitude);

    // Get planned trajectory points (time, altitude)
    std::vector<std::pair<double, double>> getPlannedTrajectory() const;

private:
    std::vector<std::pair<double, double>> plannedTrajectory_;
};

} // namespace defense
