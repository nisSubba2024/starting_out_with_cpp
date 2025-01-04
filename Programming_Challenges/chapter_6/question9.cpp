/*
********************************************************************************
* File: 			question9.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/
/*
 * P = F / (1 + r)^2
 * P is the present value, or the amount that you need to deposit today.
 * F is the future value that you want in the account. (In this case, F is $10,000.)
 * r is the annual interest rate.
 * n is the number of years that you plan to let the money sit in the account.
 */

#include <iostream>
#include <cmath>

double presentValue(double futureValue, double annualInterest, int numOfYears);

int main()
{
    double futureValue,
           annualInterest;
    int numOfYears;

    std::cout << "What is your end amount you want: ";
    std::cin >> futureValue;

    std::cout << "What is your annual interest: ";
    std::cin >> annualInterest;

    std::cout << "How many years do you want to save for: ";
    std::cin >> numOfYears;

    std::cout << "You need to deposit " << presentValue(futureValue, annualInterest, numOfYears) << std::endl;

    return 0;
}

double presentValue(double futureValue, double annualInterest, int numOfYears)
{
    return futureValue / std::pow((1 + annualInterest), numOfYears);
}
