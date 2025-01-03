/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question19.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    std::cout << "\n**************** Question 19: Budget Analysis ******************\n" << std::endl;

    double expenseTotal = 0, expense,
    monthlyBudget;

    std::cout << "Enter your month budget: ";
    std::cin >> monthlyBudget;

    while (true)
    {
        std::cout << "Enter your expense or 0 to quit: ";
        std::cin >> expense;

        if (expense == 0)
        {
            break;
        }

        expenseTotal += expense;
    }

    double endBalance = monthlyBudget - expenseTotal;

    std::cout << "\n -------- Budget Analysis --------\n" << std::endl;
    std::cout << "Month Budget: " << monthlyBudget << std::endl;
    std::cout << "Total Expenses: " << expenseTotal << std::endl;
    std::cout << "End Balance: " << endBalance << std::endl;

    if (endBalance >= 0)
    {
        std::cout << "Congratulation, you have a positive balance" << std::endl;
    }
    else
    {
        std::cout << "You need to control your expense, you have a negative balance" << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
