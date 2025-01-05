/*
********************************************************************************
* File: 			question18.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>

const double HOURLY_RATE = 25.00;
const int SQUARE_FEET_RATIO = 110;
const int HOURS_LABORED = 8;

int roomToPaints();
double paintCost();
double roomSpace(int numOfRooms);
double gallonsRequired(double wallSpace);
double hoursRequired(double gallons);
double laborCost(double hours);
void paintJobDetails(double gallonsRequired, double hoursRequired, double paintCost, double laborCharge);


int main()
{
    int rooms = roomToPaints();
    double costOfPaints = paintCost();
    double space = roomSpace(rooms);
    double gallons = gallonsRequired(space);
    double hours = hoursRequired(gallons);
    double labor = laborCost(hours);
    paintJobDetails(gallons, hours, costOfPaints, labor);

    return 0;
}

int roomToPaints()
{
    int rooms;
    do
    {
        std::cout << "How many rooms to paint: ";
        std::cin >> rooms;
    }
    while (rooms < 1);

    return rooms;
}

double paintCost()
{
    double gallonCost;
    do
    {
        std::cout << "What is price of paint per gallon: ";
        std::cin >> gallonCost;
    }
    while (gallonCost < 10.00);

    return gallonCost;
}

double roomSpace(int numOfRooms)
{
    double wallSpace,
           totalWallSpace = 0.0;

    for (int i = 1; i <= numOfRooms; i++)
    {
        std::cout << "How much of sq feet of wall space in room " << i << ": " << std::endl;
        std::cin >> wallSpace;
        totalWallSpace += wallSpace;
    }

    return totalWallSpace;
}

double gallonsRequired(double wallSpace)
{
    return wallSpace / SQUARE_FEET_RATIO;
}

double hoursRequired(double gallons)
{
    return gallons * HOURS_LABORED;
}

double laborCost(double hours)
{
    return hours * HOURLY_RATE;
}

void paintJobDetails(double gallonsRequired, double hoursRequired, double paintCost, double laborCharge)
{
    double totalPaintCost = (paintCost * gallonsRequired) + laborCharge;
    std::cout << "\n----------------- Paint Job Details ---------------------\n" << std::endl;
    std::cout << "Gallons of paint required: " << gallonsRequired << std::endl;
    std::cout << "Hours of labor: " << hoursRequired << std::endl;
    std::cout << "Cost of paint: " << paintCost << std::endl;
    std::cout << "Labor changes: " << laborCharge << std::endl;
    std::cout << "Total paint cost: " << totalPaintCost << std::endl;
}
