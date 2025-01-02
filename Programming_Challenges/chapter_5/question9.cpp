/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question9.cpp
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
    std::cout << "\n**************** Question 9: Hotel Occupancy ******************\n" << std::endl;

    int numFloors,
        numRooms,
        numOfOccupied;
    int totalRooms = 0;
    int totalOccupied = 0;
    std::cout << "Enter number of floors: ";
    std::cin >> numFloors;

    while (numFloors < 1)
    {
        std::cout << "Invalid floor, please try again." << std::endl;
        std::cout << "Enter number of floors: ";
        std::cin >> numFloors;
    }

    for (int i = 1; i <= numFloors; i++)
    {
        std::cout << "How many rooms are in " << i << " floors? ";
        std::cin >> numRooms;

        while (numRooms < 10)
        {
            std::cout << "Invalid number, must be more than 10 rooms. Please try again." << std::endl;
            std::cout << "How many rooms are in " << i << " floors? ";
            std::cin >> numRooms;
        }

        totalRooms += numRooms;

        std::cout << "How many rooms are occupied in floor " << i << "? ";
        std::cin >> numOfOccupied;

        while (numOfOccupied > numRooms)
        {
            std::cout << "You cannot have more rooms occupied than number of available rooms." << std::endl;
            std::cout << "How many rooms are occupied in floor " << i << "? ";
            std::cin >> numOfOccupied;
        }

        totalOccupied += numOfOccupied;

        if (i == 13)
        {
            continue;
        }
    }

    std::cout << "\n-------- Hotel Information --------" << std::endl;

    std::cout << "Number of floors: " << numFloors << std::endl;
    std::cout << "Number of rooms: " << totalRooms << std::endl;
    std::cout << "Rooms currently occupied: " << totalOccupied << std::endl;
    std::cout << "Rooms currently unoccupied: " << totalRooms - totalOccupied << std::endl;
    std::cout << "Percentage of room occupied: " << std::setprecision(2) << std::fixed << (static_cast<double>(
        totalOccupied) / totalRooms) * 100 << "%" << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
