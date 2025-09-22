#pragma once
#include <functional>

namespace defense {
namespace physics {

class NumericalIntegrator {
public:
    static double euler(double y, double dydt, double dt);
    static double rungeKutta4(double y, double dydt, double dt,
                              std::function<double(double,double)> f);
};

} // namespace physics
} // namespace defense
