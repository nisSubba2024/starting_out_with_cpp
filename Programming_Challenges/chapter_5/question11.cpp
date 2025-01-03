/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question11.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    std::cout << "\n**************** Question 11: Population ******************\n" << std::endl;

    int startingPopulation;
    double dailyIncreasePercentage;
    int numOfDays;


    std::cout << "Enter starting population: ";
    std::cin >> startingPopulation;

    while (startingPopulation < 2)
    {
        std::cout << "Invalid number, must be higher than 2" << std::endl;
        std::cout << "Enter starting population: ";
        std::cin >> startingPopulation;
    }

    std::cout << "Enter daily population increase rate in percentage: ";
    std::cin >> dailyIncreasePercentage;

    while (startingPopulation < 0)
    {
        std::cout << "Invalid number, increase rate cannot be negative" << std::endl;
        std::cout << "Enter daily population increase rate in percentage: ";
        std::cin >> dailyIncreasePercentage;
    }

    double multiplyRate = dailyIncreasePercentage / 100;

    std::cout << "Enter number of days they will multiply: ";
    std::cin >> numOfDays;

    while (numOfDays < 1)
    {
        std::cout << "Invalid number, must be higher than 1" << std::endl;
        std::cout << "Enter daily population increase rate in percentage: ";
        std::cin >> numOfDays;
    }

    for (int i = 1; i <= numOfDays; i++)
    {
        int currentDayPopulation = startingPopulation * multiplyRate + startingPopulation; // 15
        std::cout << "Day " << i << ": Population: " << currentDayPopulation << std::endl;
        startingPopulation = currentDayPopulation;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
