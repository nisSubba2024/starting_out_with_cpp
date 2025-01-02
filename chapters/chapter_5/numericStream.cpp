/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: NUMERICSTREAM.CPP
 *      Written by Nishan Subba
 *      GitHub: @nisSubba2024
 *      Purpose: Learning I/O Operation
 *      Last Date Modified: Jan 1, 2025
 * //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <string>
#include <fstream>

int main()
{
    // input variables
    std::ofstream numericData;
    int num1,
        num2,
        num3;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    std::cout << "Enter number 3: ";
    std::cin >> num3;


    numericData.open("NumericData.txt");

    if (numericData.is_open())
    {
        std::cout << "File opened for inserting data" << std::endl;
        numericData << num1 << std::endl;
        numericData << num2 << std::endl;
        numericData << num3 << std::endl;
    }

    numericData.close();
    std::cout << "Data added to file and closed" << std::endl;

    // read the file
    std::ifstream inFile;
    int value1,
        value2,
        value3;

    // open the file
    inFile.open("NumericData.txt");

    if (inFile.is_open())
    {
        std::cout << "Reading from file" << std::endl;
        std::cout << "Here are the numbers: " << std::endl;
        inFile >> value1;
        std::cout << value1 << " ";

        inFile >> value2;
        std::cout << value2 << " ";

        inFile >> value3;
        std::cout << value3 << std::endl;
    }

    // close file
    inFile.close();

    // find the sum

    int sumTotal = value1 + value2 + value3;

    std::cout << "Their sum is: " << sumTotal << std::endl;


    return 0;
}
