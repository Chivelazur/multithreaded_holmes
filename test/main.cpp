#include "../include/gravity_stokes.hpp"

void main() 
{
    using namespace uniorb;

    auto Result = std::array<double, 3>();
    auto GravityStokes = gravity_stokes();
    GravityStokes.import("../test_data/EGM96.gfc", 16, 16);
    GravityStokes.get_acceleration(6370000, 10, 10, Result);

    std::cout 
        << "ax = " << Result[0] << std::endl
        << "ay = " << Result[1] << std::endl
        << "az = " << Result[2];

}