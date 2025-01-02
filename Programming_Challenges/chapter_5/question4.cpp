/*
 *  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question4.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>


int main()
{
    std::cout << "\n**************** Question 4: Calories Burned ******************\n" << std::endl;

    const double CALORIES_BURNED_RATE = 3.6; // Calories per minute

    for (int minutes = 1; minutes <= 30; minutes++)
    {
        if (minutes % 5 == 0)
        {
            std::cout << "Calories Burned at " << minutes << " minutes: " << minutes * CALORIES_BURNED_RATE << std::endl;
        }
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
