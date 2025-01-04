/*
********************************************************************************
* File: 			question6.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>
#include <cmath>
double kineticEnergy(double mass, double velocity);

int main()
{
    // kinetic energy: ke = 1 / 2 mv^2
    double mass,
           velocity;

    std::cout << "Enter object mass in kilograms: ";
    std::cin >> mass;

    std::cout << "Enter object velocity in seconds: ";
    std::cin >> velocity;

    std::cout << "Object mass is: " << mass << " kilograms" << std::endl;
    std::cout << "Object velocity is: " << velocity << " seconds" << std::endl;
    std::cout << "Total energy: " << kineticEnergy(mass, velocity) << " joule" << std::endl;
    return 0;
}

double kineticEnergy(double mass, double velocity)
{
    return ((static_cast<double>(1) / 2) * mass * std::pow(velocity, 2));
}
