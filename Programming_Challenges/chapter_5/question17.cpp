/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question17.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    std::cout << "\n**************** Question 17: Sales Bar Chart ******************\n" << std::endl;

    int store1,
        store2,
        store3,
        store4,
        store5;

    std::cout << "Enter today's sales for store 1: ";
    std::cin >> store1;

    std::cout << "Enter today's sales for store 2: ";
    std::cin >> store2;

    std::cout << "Enter today's sales for store 3: ";
    std::cin >> store3;

    std::cout << "Enter today's sales for store 4: ";
    std::cin >> store4;

    std::cout << "Enter today's sales for store 5: ";
    std::cin >> store5;

    std::cout << "\n-------- SALES BAR CHART ----------\n" << std::endl;
    std::cout << "(Each * = 100)" << std::endl;

    std::cout << "Store 1: ";
    for (int i = 1; i <= store1 / 100; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "Store 2: ";
    for (int i = 1; i <= store2 / 100; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "Store 3: ";
    for (int i = 1; i <= store3 / 100; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "Store 4: ";
    for (int i = 1; i <= store4 / 100; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "Store 5: ";
    for (int i = 1; i <= store5 / 100; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
