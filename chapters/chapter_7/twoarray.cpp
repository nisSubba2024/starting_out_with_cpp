//
// Created by Nishan Subba on 1/5/25.
//
#include <iostream>
#include <iomanip>

int main()
{
    const int NUM_DIVS = 3;           // Number of divisions
    const int NUM_QTRS = 4;           // Number of quarters
    double sales[NUM_DIVS][NUM_QTRS]; // Array with 3 rows and 4 columns
    double totalSales = 0;            // to hold the total sales
    int div, qtr;

    std::cout << "This program will calculate the total sales of\n";
    std::cout << "all the company's division.\n";
    std::cout << "Enter the following sales information:\n\n";

    // nested loops to fill the arrays with quarterly
    // sales figures for each division
    for (div = 0; div < NUM_DIVS; div++)
    {
        for (qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            std::cout << "Division " << (div + 1);
            std::cout << ", Quarter " << (qtr + 1) << ": $";
            std::cin >> sales[div][qtr];
        }
        std::cout << std::endl; //print blank line

    }

    // nested loops used to add all the elements
    for (div = 0; div < NUM_DIVS; div++)
    {
        for (qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            totalSales += sales[div][qtr];
            std::cout << sales[div][qtr] << std::endl;
        }
    }

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The total sales for the company are: $";
    std::cout << totalSales << std::endl;
    return 0;
}
