#include "defense/MissionPlanner.h"

namespace defense {

MissionPlanner::MissionPlanner() {}

bool MissionPlanner::planIntercept(double projectileVelocity, double targetAltitude) {
    plannedTrajectory_.clear();

    // Placeholder: simple linear climb toward target
    for (double t = 0; t < 10.0; t += 1.0) {
        plannedTrajectory_.push_back({t, projectileVelocity * t});
        if (projectileVelocity * t >= targetAltitude) {
            return true;
        }
    }

    return false;
}

std::vector<std::pair<double, double>> MissionPlanner::getPlannedTrajectory() const {
    return plannedTrajectory_;
}

} // namespace defense
