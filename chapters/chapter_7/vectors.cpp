//
// Created by Nishan Subba on 1/6/25.
//

#include <iostream>
#include <vector>
#include <iomanip>
int main()
{
    // const int NUM_EMPLOYEES = 5;
    // std::vector<int> hours(NUM_EMPLOYEES);
    // std::vector<double> payRate(NUM_EMPLOYEES);
    // int index;
    //
    // std::cout << "Enter the hours worked by " << NUM_EMPLOYEES;
    // std::cout << " employees and their hourly rates.\n";
    //
    // for (index = 0; index < NUM_EMPLOYEES; index++)
    // {
    //     std::cout << "Hours worked by employee # " << (index + 1);
    //     std::cout << ": ";
    //     std::cin >> hours[index];
    //     std::cout << "Hourly pay rate for employee " << (index + 1) << ": ";
    //     std::cin >> payRate[index];
    // }
    //
    // // display the result
    // std::cout << "\nHere is the gross pay for each employee:\n";
    // std::cout << std::fixed << std::showpoint << std::setprecision(2);
    //
    // for (index = 0; index < NUM_EMPLOYEES; index++)
    // {
    //     double grossPay = hours[index] * payRate[index];
    //     std::cout << "Employee #" << (index + 1);
    //     std::cout << ": $" << grossPay << std::endl;
    // }


    // using push back

    std::vector<int> hours;
    std::vector<double> payRate;
    int numEmployees;
    int index;

    std::cout << "Enter number of employees: ";
    std::cin >> numEmployees;

    std::cout << "Enter the hours worked by " << numEmployees;
    std::cout << " employees and their hourly rates.\n";

    for (index = 0; index < numEmployees; index++)
    {
        int tempHours; // hold the # of hours enters
        double tempRates; // hold the pay rate
        std::cout << "Hours worked by employee # " << (index + 1);
        std::cout << ": ";
        std::cin >> tempHours;
        hours.push_back(tempHours);
        std::cout << "Hourly pay rate for employee " << (index + 1) << ": ";
        std::cin >> tempRates;
        payRate.push_back(tempRates);
    }

    // display the result
    std::cout << "\nHere is the gross pay for each employee:\n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        std::cout << "Employee #" << (index + 1);
        std::cout << ": $" << grossPay << std::endl;
    }
}
