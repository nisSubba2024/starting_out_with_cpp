/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: LOOPSTREAM.CPP
 *      Written by Nishan Subba
 *      GitHub: @nisSubba2024
 *      Purpose: Learning I/O Operation
 *      Last Date Modified: Jan 1, 2025
 * //////////////////////////////////////////////////////////////////////
*/#include <iostream>
#include <fstream>

int main()
{
    std::ofstream salesData;
    int daysCount;
    double sales;

    std::cout << "For how many dats do you have sales? ";
    std::cin >> daysCount;

    // open the file
    salesData.open("Sales.txt");

    if (salesData.is_open())
    {
        for (int i = 1; i <= daysCount; i++)
        {
            // ask the user
            std::cout << "Enter the sales for day " << i << ": ";
            std::cin >> sales;

            salesData << sales << std::endl;
        }
        std::cout << "Data written to Sales.txt" << std::endl;
    }
    else
    {
        std::cout << "File did not open" << std::endl;
    }

    // close the file
    salesData.close();

    // read the file using loop
    // lets say you don't know how many items are there
    std::ifstream inputFile;
    double number;
    int counter = 1;;

    // open the file
    inputFile.open("Sales.txt");
    if (inputFile.is_open()) // you can also do : if (inputFile.fail()); which will test if opening a file failed
    {
        while (inputFile >> number)
        {
            std::cout << "Item " << counter << ": " << std::fixed << std::setprecision(2) << std::showpoint << number << std::endl;
            counter ++;
        }
    }
    else
    {
        std::cout << "File did not open" << std::endl;
    }

    // close the file
    inputFile.close();

    return 0;
}
