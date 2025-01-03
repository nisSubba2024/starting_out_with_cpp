/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question12.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <iomanip>
int main()
{
    std::cout << "\n**************** Question 12: Celsius to Fahrenheit Table ******************\n" << std::endl;

    // F = (C * 9/5+) + 32

    const int MAX_TEMPERATURE_CELSIUS = 20;

    std::cout << "\n------------- Celsius to Fahrenheit --------------- \n" << std::endl;
    std::cout << "Celsius\t\tFahrenheit" << std::endl;

    for (int i = 0; i <= MAX_TEMPERATURE_CELSIUS; i++)
    {
        double fahrenheit = (i * 9/5) + 32;
        std::cout << std::setw(5) <<  i << std::setw(15) << fahrenheit << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
