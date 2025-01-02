/*
    * //////////////////////////////////////////////////////////////////////
    *      Program: Programming_Challenges/Chapter_5/question5.cpp
    *      Written by Nishan Subba
    *      GitHub: @nisSubba2024
    *      Purpose: Solutions to programming challenges for chapter 5
    *      Last Date Modified: Jan 2, 2025
    * //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "\n**************** Question 5: Membership Fees Increase ******************\n" << std::endl;

    double yearlyMembershipFee = 2500.00;
    const double MEMBERSHIP_FEE_RATE = 0.04;

    for (int year = 1; year <= 6; year++)
    {
        yearlyMembershipFee += yearlyMembershipFee * MEMBERSHIP_FEE_RATE;
        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "Year " << year << ": " << yearlyMembershipFee << std::endl;
    }


    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
