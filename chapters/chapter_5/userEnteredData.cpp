/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: USERENTEREDDATA.CPP
 *      Written by Nishan Subba
 *      GitHub: @nisSubba2024
 *      Purpose: Learning I/O Operation
 *      Last Date Modified: Jan 1, 2025
 * //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <fstream>

int main()
{
    int num1,
        num2,
        num3;

    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    std::cout << "One more time. Enter a number: ";
    std::cin >> num3;

    std::ofstream inputDataFile;
    inputDataFile.open("userEnteredData.txt");

    if (inputDataFile)
    {
        inputDataFile << num1 << std::endl;
        inputDataFile << num2 << std::endl;
        inputDataFile << num3 << std::endl;
        std::cout << "The numbers were saved to a file." << std::endl;
    }

    inputDataFile.close();
    std::cout << "Done." << std::endl;

    return 0;
}