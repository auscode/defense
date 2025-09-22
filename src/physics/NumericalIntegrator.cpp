#include "defense/NumericalIntegrator.h"

namespace defense {
namespace physics {

double NumericalIntegrator::euler(double y, double dydt, double dt) {
    return y + dydt * dt;
}

double NumericalIntegrator::rungeKutta4(double y, double dydt, double dt,
                                        std::function<double(double,double)> f) {
    double k1 = dydt;
    double k2 = f(0, y + 0.5 * dt * k1);
    double k3 = f(0, y + 0.5 * dt * k2);
    double k4 = f(0, y + dt * k3);
    return y + (dt / 6.0) * (k1 + 2*k2 + 2*k3 + k4);
}

} // namespace physics
} // namespace defense
