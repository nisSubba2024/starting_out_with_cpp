/*
********************************************************************************
* File: 			question19.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>
#include <fstream>
#include <string>

double calculateCharge(int days, double dailyRate, double medCharge, double servicesCharge); // inpatient
double calculateCharge(double servicesCharge, double medCharge); // outpatient
void inpatient(int& days, double& dailyRate, double& medCharge, double& servicesCharge);
void outpatient(double& servicesCharge, double& medCharge);
void displayDetails(std::ofstream& file, int days, double dailyRate, double medCharge, double servicesCharge,
                    double totalCharge);
// inpatient
void displayDetails(std::ofstream& file, double servicesCharge, double medCharge, double totalCharge); // outpatient


int main()
{
    int days;
    double dailyRate,
           medCharge,
           servicesCharge,
           totalCharge = 0;
    char choice;

    std::ofstream outputFile;

    std::string patientFile = "patientDetails.txt";

    do
    {
        std::cout << "Was patient admitted as an inpatient(I) or outpatient(O): ";
        std::cin >> choice;
    }
    while (choice != 'I' && choice != 'O' && choice != 'o' && choice != 'i');

    outputFile.open(patientFile);

    if (outputFile)
    {
        std::cout << "File created successfully." << std::endl;

        switch (choice)
        {
            case 'I':
            case 'i':
                inpatient(days, dailyRate, medCharge, servicesCharge);
                totalCharge = calculateCharge(days, dailyRate, medCharge, servicesCharge);
                displayDetails(outputFile, days, dailyRate, medCharge, servicesCharge, totalCharge);
                break;

            case 'O':
            case 'o':
                outpatient(servicesCharge, medCharge);
                totalCharge = calculateCharge(servicesCharge, medCharge);
                displayDetails(outputFile, servicesCharge, medCharge, totalCharge);
                break;

            default:
                std::cout << "Invalid input." << std::endl;
                break;
        }
    }
    else
    {
        std::cout << "File cout not be created and opened!" << std::endl;
    }

    outputFile.close();

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

void displayDetails(std::ofstream& file, double servicesCharge, double medCharge, double totalCharge)
{
    // outpatient
    file << "\n------------------ Hospital Outpatient Care Details --------------------\n" << std::endl;
    file << "Service charges: $" << servicesCharge << std::endl;
    file << "Medication charges: $" << medCharge << std::endl;
    file << "Total charges: $" << totalCharge << std::endl;
}

void displayDetails(std::ofstream& file, int days, double dailyRate, double medCharge, double servicesCharge,
                    double totalCharge)
{
    file << "\n------------------ Hospital Inpatient Care Details --------------------\n" << std::endl;
    file << "Days stayed: " << days << std::endl;
    file << "Daily rate: $" << dailyRate << std::endl;
    file << "Service charges: $" << servicesCharge << std::endl;
    file << "Medication charges: $" << medCharge << std::endl;
    file << "Total charge: $" << totalCharge << std::endl;
}
