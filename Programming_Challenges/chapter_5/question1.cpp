/*
* //////////////////////////////////////////////////////////////////////
    *      Program: Programming_Challenges/Chapter_5/question1.cpp
    *      Written by Nishan Subba
    *      GitHub: @nisSubba2024
    *      Purpose: Solutions to programming challenges for chapter 5
    *      Last Date Modified: Jan 2, 2025
    * //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    // Question 1
    std::cout << "\n**************** Question 1: Sum of Numbers ******************\n" << std::endl;

    int numbers,
        totalSum = 0;

    std::cout << "How many numbers do you want to enter: ";
    std::cin >> numbers;

    for (int i = 1; i <= numbers; i++)
    {
        int currentNumber;
        std::cout << "Enter a number " << i << ": ";
        std::cin >> currentNumber;

        while (currentNumber < 0)
        {
            std::cout << "Invalid number, please enter positive number. " << std::endl;
            std::cout << "Enter a number " << i << ": ";
            std::cin >> currentNumber;
        }
        totalSum += currentNumber;
    }

    std::cout << "The sum of the number is " << totalSum << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
