/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question10.cpp
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
    std::cout << "\n**************** Question 10: Average Rainfall ******************\n" << std::endl;

    int numOfYears;

    std::cout << "Enter number of years: ";
    std::cin >> numOfYears;

    while (numOfYears < 1)
    {
        std::cout << "Invalid number, atleast 1 year. Please try again. " << std::endl;
        std::cout << "Enter number of years: ";
        std::cin >> numOfYears;
    }

    const int MONTHS = 12;
    int rainfallInches;
    int totalRainfall = 0;
    int totalMonths = 0;

    for (int year = 1; year <= numOfYears; year++)
    {
        std::cout << "Year: " << year << std::endl;
        for (int month = 1; month <= MONTHS; month++)
        {
            std::cout << "How many inches of rainfall for month " << month << ": ";
            std::cin >> rainfallInches;

            while (rainfallInches < 0)
            {
                std::cout << "Invalid number, you cannot have negative inches rainfall. " << std::endl;
                std::cout << "How many inches of rainfall for month " << month << ": ";
                std::cin >> rainfallInches;
            }

            totalRainfall += rainfallInches;
            totalMonths += 1;
        }

        std::cout << std::endl;
    }

    double avgRainfall = static_cast<double>(totalRainfall) / totalMonths;

    std::cout << "\n-------------- Rainfall Data ------------\n" << std::endl;
    std::cout << "Number of months: " << totalMonths << std::endl;
    std::cout << "Total Rainfall inches: " << totalRainfall << std::endl;
    std::cout << "Average Rainfall inches: " << std::setprecision(2) << std::fixed << avgRainfall << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
