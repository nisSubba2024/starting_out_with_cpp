/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question22.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    std::cout << "\n**************** Question 22: Square Display ******************\n" << std::endl;

    int length;

    do
    {
        std::cout << "Enter length of the square: ";
        std::cin >> length;
    } while (length < 1 || length > 15);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            std::cout << "X" << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "Length is: " << length << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
