/*
********************************************************************************
* File: 			question5.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>
#include <cmath>
#include <iomanip>

const double EARTH_GRAVITY = 9.8;

double fallDistance(int timeInSeconds);

int main()
{
    // d = 1/2gt^2
    // d = distance
    // g = 9.8
    // t = time in seconds that the object has been falling

    std::cout << std::setprecision(2) << std::fixed;
    for (int second = 1; second <= 10; second++)
    {
        std::cout << "At " << second  << " second, " << " Distance: " << fallDistance(second) << " meters." << std::endl;
    }

    return 0;
}

double fallDistance(int timeInSeconds)
{
    return (static_cast<double> (1) / 2) * EARTH_GRAVITY * pow(timeInSeconds, 2);
}