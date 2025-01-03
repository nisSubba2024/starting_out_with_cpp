/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question23.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    std::cout << "\n**************** Question 23: Pattern Displays ******************\n" << std::endl;
    std::cout << "Pattern A: " << std::endl;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "+";
        }

        std::cout << std::endl;
    }

    std::cout << "\nPattern B: " << std::endl;
    for (int i = 10; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            std::cout << "+";
        }

        std::cout << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
