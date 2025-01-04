/*
********************************************************************************
* File: 			question3.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges, question3.cpp
********************************************************************************
*/


#include <iostream>
#include <string>

double getSales(std::string divisionName);
void findHighest(double northEastSales, double southEastSales, double northWestSales, double southWestSales);

int main()
{
    double northEastDivision = getSales("North East Division");
    double southEastDivision = getSales("South East Division");
    double northWestDivision = getSales("North West Division");
    double southWestDivision = getSales("South East Division");

    findHighest(northEastDivision, southEastDivision, northWestDivision, southWestDivision);

    return 0;
}

double getSales(std::string divisionName)
{
    double sales;

    do
    {
        std::cout << "Enter sales for " << divisionName << ": ";
        std::cin >> sales;
    }
    while (sales < 0.00);

    return sales;
}

void findHighest(double northEastSales, double southEastSales, double northWestSales, double southWestSales)
{
    if (northEastSales > southEastSales && northEastSales > northWestSales && northEastSales > southWestSales)
    {
        std::cout << "The highest sales is North East Sales with " << northEastSales << std::endl;
    }
    else if (southEastSales > northEastSales && southEastSales > northWestSales && southEastSales > southWestSales)
    {
        std::cout << "The highest sales is South East Sales with " << southEastSales << std::endl;
    }
    else if (northWestSales > northEastSales && northWestSales > southEastSales && northWestSales > southWestSales)
    {
        std::cout << "The highest sales is North West Sales with " << northWestSales << std::endl;
    }
    else
    {
        std::cout << "The highest sales is South West Sales with " << southWestSales << std::endl;
    }
}
