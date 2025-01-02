/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question7.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    std::cout << "\n**************** Question 7: Pennies for Pay ******************\n" << std::endl;

    int numOfDays;
    int salary = 1;

    std::cout << "Enter number of days you work: ";
    std::cin >> numOfDays;

    while (numOfDays < 1)
    {
        std::cout << "Invalid days, please try again." << std::endl;
        std::cout << "Enter number of days you work: ";
        std::cin >> numOfDays;
    }

    for (int i = 1; i <= numOfDays; i++)
    {
        salary += salary;
        std::cout << "Day " << i << " salary: $" << salary << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
