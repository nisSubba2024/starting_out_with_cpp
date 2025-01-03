/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question18.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << "\n**************** Question 18: Population Bar Chart ******************\n" << std::endl;

    std::ifstream inputFile;
    int population;
    int year1900,
    year1920,
    year1940,
    year1960,
    year1980,
    year2000;

    inputFile.open("People.txt");

    if (inputFile)
    {
        std::cout << "File opened successfully." << std::endl;

        inputFile >> year1900;
        inputFile >> year1920;
        inputFile >> year1940;
        inputFile >> year1960;
        inputFile >> year1980;
        inputFile >> year2000;
    }
    else
    {
        std::cout << "Error opening file." << std::endl;
    }

    inputFile.close();

    std::cout << "\n----- PRAIREIVILLE POPULATION GROWTH -----\n" << std::endl;
    std::cout << "(each * represents 1,000 people)" << std::endl;

    std::cout << "1900: ";
    for (int i = 1; i <= year1900/1000; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "1920: ";
    for (int i = 1; i <= year1920/1000; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "1940: ";
    for (int i = 1; i <= year1940/1000; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "1960: ";
    for (int i = 1; i <= year1960/1000; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "1200: ";
    for (int i = 1; i <= year2000/1000; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
