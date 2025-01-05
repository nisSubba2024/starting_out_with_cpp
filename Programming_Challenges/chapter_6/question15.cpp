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


#include <iostream>

double calculateCharge(int days, double dailyRate, double medCharge, double servicesCharge); // inpatient
double calculateCharge(double servicesCharge, double medCharge); // outpatient
void inpatient(int& days, double& dailyRate, double& medCharge, double& servicesCharge);
void outpatient(double& servicesCharge, double& medCharge);

int main()
{
    int days;
    double dailyRate,
           medCharge,
           servicesCharge,
           totalCharge = 0;
    char choice;

    do
    {
        std::cout << "Was patient admitted as an inpatient(I) or outpatient(O): ";
        std::cin >> choice;
    }
    while (choice != 'I' && choice != 'O' && choice != 'o' && choice != 'i');

    switch (choice)
    {
        case 'I':
        case 'i':
            inpatient(days, dailyRate, medCharge, servicesCharge);
            totalCharge = calculateCharge(days, dailyRate, medCharge, servicesCharge);
            break;

        case 'O':
        case 'o':
            outpatient(servicesCharge, medCharge);
            totalCharge = calculateCharge(servicesCharge, medCharge);
            break;

        default:
            std::cout << "Invalid input." << std::endl;
            break;
    }

    std::cout << "The total charge is $" << totalCharge << std::endl;

    return 0;
}

void inpatient(int& days, double& dailyRate, double& medCharge, double& servicesCharge)
{
    do
    {
        std::cout << "Enter number of days spend in the hospital: ";
        std::cin >> days;

        std::cout << "Enter daily rate: ";
        std::cin >> dailyRate;

        std::cout << "Enter med charge: ";
        std::cin >> medCharge;

        std::cout << "Enter services charge: ";
        std::cin >> servicesCharge;
    }
    while (days < 0 || dailyRate < 0 || medCharge < 0 || servicesCharge < 0);
}

void outpatient(double& servicesCharge, double& medCharge)
{
    do
    {
        std::cout << "Enter med charge: ";
        std::cin >> medCharge;

        std::cout << "Enter services charge: ";
        std::cin >> servicesCharge;
    }
    while (medCharge < 0 || servicesCharge < 0);
}

double calculateCharge(int days, double dailyRate, double medCharge, double servicesCharge)
{
    return (days * dailyRate) + medCharge + servicesCharge;
}


double calculateCharge(double servicesCharge, double medCharge)
{
    return servicesCharge + medCharge;
}
