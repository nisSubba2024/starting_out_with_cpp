/*
********************************************************************************
* File: 			question13.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>
#include <iomanip>

int numberOfEmployees();
int absenteeEmployees(int numOfEmployees);
double averageAbsentDays(int numOfEmployees, int absents);

int main()
{
    std::cout << std::setprecision(2) << std::fixed << std::endl;

    int employees = numberOfEmployees();
    int absentEmployees = absenteeEmployees(employees);
    double averageAbsentee = averageAbsentDays(employees, absentEmployees);
    std::cout << "\n----------- Employee Record --------------\n" << std::endl;
    std::cout << "Number of Employees: " << employees << std::endl;
    std::cout << "Number of Absent Days: " << absentEmployees << std::endl;
    std::cout << "Average Absent Days: " << averageAbsentee << " days" << std::endl;

    return 0;
}

int numberOfEmployees()
{
    int totalEmployees;
    do
    {
        std::cout << "How many total employees: ";
        std::cin >> totalEmployees;
    }
    while (totalEmployees < 1);

    return totalEmployees;
}

int absenteeEmployees(int numOfEmployees)
{
    int absents;
    int totalAbsentee = 0;

    for (int i = 1; i <= numOfEmployees; i++)
    {
        do
        {
            std::cout << "How many days did Employee " << i << " missed work: ";
            std::cin >> absents;
        }
        while (absents < 0);

        totalAbsentee += absents;

        std::cout << "Absentee: " << absents << std::endl;
    }

    return totalAbsentee;
}

double averageAbsentDays(int numOfEmployees, int absents)
{
    return static_cast<double>(absents) / numOfEmployees;
}
