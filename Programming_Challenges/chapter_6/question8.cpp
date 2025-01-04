/*
********************************************************************************
* File: 			question8.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>
#include <random>
#include <iomanip>

int coinToss();

int main()
{
    int numOfToss;
    int headCounter = 0,
        tailCounter = 0;
    std::cout << "How many times do you want to toss a coin: ";
    std::cin >> numOfToss;


    std::cout << "Toss Number" << std::setw(20) << "Result" << std::endl;
    for (int i = 1; i <= numOfToss; i++)
    {
        std::cout << std::setw(8) << i << ": " << std::setw(20);
        if (coinToss())
        {
            headCounter++;
            std::cout << "Head" << std::endl;
        }
        else
        {
            tailCounter++;
            std::cout << "Tail" << std::endl;
        }
    }
    std::cout << std::setprecision(3) << std::fixed << std::endl;
    std::cout << "Total: " << std::endl;
    std::cout << "Head: " << headCounter << "/" << numOfToss << " Probability: " << ((static_cast<double>(headCounter) /
        numOfToss) * 100) << std::endl;
    std::cout << "Tail: " << tailCounter << "/" << numOfToss << " Probability: " << ((static_cast<double>(tailCounter) /
        numOfToss) * 100) << std::endl;


    return 0;
}

int coinToss()
{
    // generate random number
    std::random_device randomEngine;
    std::uniform_int_distribution<int> randomInt(0, 1);

    if (int randomNumber = randomInt(randomEngine))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
