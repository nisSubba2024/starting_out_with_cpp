/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question6.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "\n**************** Question 6: Distance Traveled ******************\n" << std::endl;

    // distance = speed * time
    double speed;
    int hoursTraveled;

    std::cout << "What is the speed of the vehicle in mph? ";
    std::cin >> speed;

    while (speed < 1)
    {
        std::cout << "Invalid input, please try again. " << std::endl;
        std::cout << "What is the speed of the vehicle in mph? ";
        std::cin >> speed;
    }

    std::cout << "How many hours has it traveled? ";
    std::cin >> hoursTraveled;

    while (hoursTraveled < 1)
    {
        std::cout << "Invalid input, please try again. " << std::endl;
        std::cout << "How many hours has it traveled? ";
        std::cin >> hoursTraveled;
    }

    std::cout << "Hours         Distance Traveled" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    for (int i = 1; i <= hoursTraveled; i++)
    {
        std::cout << std::setw(3) << i << std::setw(15) << i * speed << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
