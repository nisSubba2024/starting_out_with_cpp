/*
********************************************************************************
* File: 			question4.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>
#include <string>

int getNumAccidents(std::string regionName);
void findLowest(int north, int south, int east, int west);

int main()
{
    int north = getNumAccidents("North");
    int south = getNumAccidents("South");
    int east = getNumAccidents("East");
    int west = getNumAccidents("West");

    findLowest(north, south, east, west);

    return 0;
}

int getNumAccidents(std::string regionName)
{
    int numOfAccidents;

    do
    {
        std::cout << "Enter number of accidents in " << regionName << ": ";
        std::cin >> numOfAccidents;
    }
    while (numOfAccidents < 0);

    return numOfAccidents;
}

void findLowest(int north, int south, int east, int west)
{
    if (north < south && north < east && north < west)
    {
        std::cout << "The lowest accident region is North with only " << north << " accidents. " << std::endl;
    }
    else if (south < north && south < east && south < west)
    {
        std::cout << "The lowest accident region is South with only " << south << " accidents. " << std::endl;
    }
    else if (east < north && east < south && east < west)
    {
        std::cout << "The lowest accident region is East with only " << east << " accidents. " << std::endl;
    }
    else
    {
        std::cout << "The lowest accident region is West with only " << west << " accidents. " << std::endl;
    }
}
