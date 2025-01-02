/*
* //////////////////////////////////////////////////////////////////////
    *      Program: Programming_Challenges/Chapter_5/question2.cpp
    *      Written by Nishan Subba
    *      GitHub: @nisSubba2024
    *      Purpose: Solutions to programming challenges for chapter 5
    *      Last Date Modified: Jan 2, 2025
    * //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <iomanip>


int main()
{
    // Question 3
    std::cout << "\n**************** Question 2: Characters for the ASCII Codes ******************\n" << std::endl;

    for (int i = 0; i <= 127; i++)
    {
        std::cout << std::setw(3) << static_cast<char>(i) << " ";

        if ((i + 1) % 16 == 0)
        {
            std::cout << std::endl;
        }
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}