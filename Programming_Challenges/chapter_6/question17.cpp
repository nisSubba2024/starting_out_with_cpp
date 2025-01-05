/*
********************************************************************************
* File: 			question17.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>

void populationData(int& initialPopulation, int& birthRate, int& deathRate, int& years, int& peopleIn, int& peopleOut);
int calculatePopulation(int initialPopulation, int birthRate, int deathRate, int years, int& peopleIn, int& peopleOut);

int main()
{
    int initialPopulation,
        birthRate,
        deathRate,
        years,
        peopleIn,
        peopleOut;

    populationData(initialPopulation, birthRate, deathRate, years, peopleIn, peopleOut);
    std::cout << "\n---------------- Population Data -----------------\n" << std::endl;
    std::cout << "Initial Population: " << initialPopulation << std::endl;
    std::cout << "Birth Rate: " << birthRate << std::endl;
    std::cout << "Death Rate: " << deathRate << std::endl;
    std::cout << "Years: " << years << std::endl;
    int totalPopulation = calculatePopulation(initialPopulation, birthRate, deathRate, years, peopleIn, peopleOut);
    std::cout << "Total Population: " << totalPopulation << std::endl;
    return 0;
}

void populationData(int& initialPopulation, int& birthRate, int& deathRate, int& years, int& peopleIn, int& peopleOut)
{
    do
    {
        std::cout << "Enter initial population: ";
        std::cin >> initialPopulation;
        while (initialPopulation < 2)
        {
            std::cout << "Initial population must be greater than 2" << std::endl;
            std::cout << "Enter initial population: ";
            std::cin >> initialPopulation;
        }

        std::cout << "Enter birth rate: ";
        std::cin >> birthRate;
        while (birthRate < 0)
        {
            std::cout << "Birth rate cannot be negative." << std::endl;
            std::cout << "Enter birth rate: ";
            std::cin >> birthRate;
        }

        std::cout << "Enter death rate: ";
        std::cin >> deathRate;
        while (deathRate < 0)
        {
            std::cout << "Death rate cannot be negative." << std::endl;
            std::cout << "Enter death rate: ";
            std::cin >> deathRate;
        }

        std::cout << "Enter how many year: ";
        std::cin >> years;
        while (years < 1)
        {
            std::cout << "Years must be higher than 1." << std::endl;
            std::cout << "Enter how many year: ";
            std::cin >> years;
        }

        std::cout << "How many new people arrived: ";
        std::cin >> peopleIn;
        while (peopleIn < 0)
        {
            std::cout << "Cannot have negative people." << std::endl;
            std::cout << "How many new people arrived: ";
            std::cin >> peopleIn;
        }

        std::cout << "How many people departed: ";
        std::cin >> peopleOut;
        while (peopleOut < 0)
        {
            std::cout << "Cannot have negative people." << std::endl;
            std::cout << "How many people departed: ";
            std::cin >> peopleOut;
        }
    }
    while (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || years < 1 || peopleIn < 0 || peopleOut < 0);
}

int calculatePopulation(int initialPopulation, int birthRate, int deathRate, int years, int& peopleIn, int& peopleOut)
{
    return initialPopulation + (birthRate * initialPopulation) - (deathRate * initialPopulation) + (years * peopleIn) -
        (years * peopleOut);
}
