/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question13.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    std::cout << "\n**************** Question 13: The Greatest and Least of These ******************\n" << std::endl;

    int numbers;

    std::cout << "Enter a number or -99 to quit: ";
    std::cin >> numbers;
    int smallestNum = numbers;
    int biggestNum = numbers;


    while (numbers != -99)
    {
        std::cout << "Enter a number or -99 to quit: ";
        std::cin >> numbers;

        if (numbers != -99)
        {
            if (smallestNum > numbers)
            {
                smallestNum = numbers;
            }
            else if (biggestNum < numbers)
            {
                biggestNum = numbers;
            }
        }
    }

    std::cout << "The biggest number is: " << biggestNum << std::endl;
    std::cout << "The smallest number is: " << smallestNum << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
