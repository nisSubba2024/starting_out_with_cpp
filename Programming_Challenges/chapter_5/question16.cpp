/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question16.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    std::cout << "\n**************** Question 16: Savings Account Balance ******************\n" << std::endl;

    double annualInterestRate,
           startBalance,
           totalWithdraw = 0,
           totalDeposit = 0,
           currentMonthDeposit = 0,
           currentMonthWithdraw = 0,
           totalInterestEarned = 0;
    int numOfMonths;

    std::cout << "Enter your annual interest rate: ";
    std::cin >> annualInterestRate;

    std::cout << "Enter your starting balance: ";
    std::cin >> startBalance;

    std::cout << "Enter your number of months: ";
    std::cin >> numOfMonths;

    for (int i = 1; i <= numOfMonths; i++)
    {
        std::cout << "\nFor Month " << i << ": " << std::endl;
        std::cout << "How much did you deposit: ";
        std::cin >> currentMonthDeposit;
        startBalance += currentMonthDeposit;
        totalDeposit += currentMonthDeposit;

        std::cout << "How much did you withdraw: ";
        std::cin >> currentMonthWithdraw;
        startBalance -= currentMonthWithdraw;
        totalWithdraw += currentMonthWithdraw;

        if (startBalance < 0)
        {
            std::cout << "Insufficient balance" << std::endl;
            std::cout << "Account closing ......." << std::endl;
            break;
        }

        double monthlyInterestRate = (annualInterestRate / 100) / 12;
        double monthlyInterest = startBalance * monthlyInterestRate;
        totalInterestEarned += monthlyInterest;
        double monthlyBalance = startBalance + monthlyInterest;
        startBalance = monthlyBalance;
    }

    if (startBalance > 0)
    {
        std::cout << "\n---------- Saving Account Balance Statement ------------\n" << std::endl;
        std::cout << "Ending Balance: $" << startBalance << std::endl;
        std::cout << "Total Deposited: $" << totalDeposit << std::endl;
        std::cout << "Total Withdraw: $" << totalWithdraw << std::endl;
        std::cout << "Total Interest Earned: $" << totalInterestEarned << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
