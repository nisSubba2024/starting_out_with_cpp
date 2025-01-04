/*
********************************************************************************
* File: 			question7.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>
#include <iomanip>
double celsius(double fahrenheit);

int main()
{
    // C = 5/9 (F - 32)
    std::cout << "Fahrenheit to Celsius: " << std::endl;
    std::cout << "Fahrenheit " << "\t\t\t" << "Celsius" << std::endl;
    std::cout << std::setprecision(2) << std::fixed << std::endl;
    for (int i = 0; i <= 10000; i++) // question only asked for up to 20, but I made it to 50, so I can test it
    {
        std::cout << std::setw(5) << i << std::setw(20) << celsius(i) << std::endl;
    }

    return 0;
}

double celsius(double fahrenheit)
{
    return ((static_cast<double> (5) / 9) * (fahrenheit - 32));
}

