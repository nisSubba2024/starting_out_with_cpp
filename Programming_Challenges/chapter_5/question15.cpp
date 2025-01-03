/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question15.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>


int main()
{
    std::cout << "\n**************** Question 15: Payroll Report ******************\n" << std::endl;

    int employeeNumber;
    double grossPay = 0, stateTax = 0, federalTax = 0, fica = 0;

    do
    {
        std::cout << "Enter employee number or 0 to quit: ";
        std::cin >> employeeNumber;

        if (employeeNumber == 0)
        {
            break;
        }

        while (employeeNumber < 0)
        {
            std::cout << "Cannot have negative value" << std::endl;
            std::cout << "Enter employee number or 0 to quit: ";
            std::cin >> employeeNumber;
        }

        do
        {
            std::cout << "Enter gross pay: ";
            std::cin >> grossPay;
        }
        while (grossPay < 0);


        do
        {
            std::cout << "Enter state tax: ";
            std::cin >> stateTax;
        }
        while (stateTax < 0 || stateTax > grossPay);

        do
        {
            std::cout << "Enter federal tax: ";
            std::cin >> federalTax;
        }
        while (federalTax < 0 || federalTax > grossPay);


        do
        {
            std::cout << "Enter FICA: ";
            std::cin >> fica;
        }
        while (fica < 0 || fica > grossPay);


        if (stateTax + federalTax + fica > grossPay)
        {
            std::cout << "Your taxes cannot be higher than gross pay. please reenter data." << std::endl;
            stateTax = 0;
            federalTax = 0;
            fica = 0;
            continue;
        }

        double netPay = grossPay - (stateTax + federalTax + fica);

        // display
        std::cout << "\n------------- Payroll for Employee: " << employeeNumber << " -----------------\n" << std::endl;
        std::cout << "Employee Number: " << employeeNumber << std::endl;
        std::cout << "Gross Pay: $" << grossPay << std::endl;
        std::cout << "State Tax: $" << stateTax << std::endl;
        std::cout << "Federal Tax: $" << federalTax << std::endl;
        std::cout << "FICA: $" << fica << std::endl;
        std::cout << "Net Pay: $" << netPay << "\n" << std::endl;
    }
    while (employeeNumber != 0);


    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
