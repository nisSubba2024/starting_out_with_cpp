/*
********************************************************************************
* File: 			questionX.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


/*
 * F = P X (1 + i)^t
 * F is the future value of the account after the specified time period.
 * P is the present value of the account.
 * i is the monthly interest rate.
 * t is the number of months.
 */

#include <iostream>

double futureValue(double presentValue, double monthlyInterest, int numOfMonths);

int main()
{
    double presentValue,
           monthlyInterest;
    int numOfMonths;

    std::cout << "Enter your initial deposit amount: ";
    std::cin >> presentValue;

    std::cout << "Enter your monthly interest: ";
    std::cin >> monthlyInterest;

    std::cout << "Enter number of months: ";
    std::cin >> numOfMonths;

    std::cout << "After " << numOfMonths << " you will have " << futureValue(presentValue, monthlyInterest, numOfMonths)
        << " dollars." << std::endl;

    return 0;
}

double futureValue(double presentValue, double monthlyInterest, int numOfMonths)
{
    return (presentValue * (std::pow((1 + monthlyInterest), numOfMonths)));
}
