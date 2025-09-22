#include <cmath>
#include "defense/utils/PhysicsConstants.h"

namespace defense {
namespace utils {

// Example helper functions
double degToRad(double deg) {
    return deg * M_PI / 180.0;
}

double radToDeg(double rad) {
    return rad * 180.0 / M_PI;
}

double magnitude(double x, double y) {
    return std::sqrt(x * x + y * y);
}

} // namespace utils
} // namespace defense
