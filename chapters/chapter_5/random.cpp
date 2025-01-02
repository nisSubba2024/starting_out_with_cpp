/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: RANDOM.CPP
 *      Written by Nishan Subba
 *      GitHub: @nisSubba2024
 *      Purpose: Learning random number generation
 *      Last Date Modified: Jan 1, 2025
 * //////////////////////////////////////////////////////////////////////
*/
#include <iostream>
#include <random>
#include <iomanip>

int main()
{
    // generate a random integer from 1 to 50;
    std::random_device myRandomEngine;

    for (int i = 0; i < 10; i++)
    {
        std::uniform_int_distribution<int>randomInt(1, 100); // both are inclusive, so 1 and 100 could be printed
        int randomNumber = randomInt(myRandomEngine);
        std::cout << "Random Int Number: " << randomNumber << std::endl;

    }

    std::cout << "\nDecimal random\n" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::uniform_real_distribution<double>randomReal(0, 1);
        double randomNumber = randomReal(myRandomEngine);
        std::cout << "Random Decimal Number: " << std::setprecision(2) << std::fixed << randomNumber << std::endl;

    }
}