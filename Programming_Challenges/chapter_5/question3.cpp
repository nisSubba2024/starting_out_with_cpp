/*
    * //////////////////////////////////////////////////////////////////////
    *      Program: Programming_Challenges/Chapter_5/question3.cpp
    *      Written by Nishan Subba
    *      GitHub: @nisSubba2024
    *      Purpose: Solutions to programming challenges for chapter 5
    *      Last Date Modified: Jan 2, 2025
    * //////////////////////////////////////////////////////////////////////
*/

#include <iostream>


int main()
{
    // Question 3
    std::cout << "\n**************** Question 3: Ocean Levels ******************\n" << std::endl;

    const double OCEAN_RISE_RATE = 1.5; // Millimeters per year

    for (int year = 1; year <= 25; year++)
    {
        std::cout << "Ocean Level at Year " << year << ": " << year * OCEAN_RISE_RATE << " millimeter." << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
