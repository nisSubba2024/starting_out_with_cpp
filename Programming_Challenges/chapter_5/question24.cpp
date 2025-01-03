/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question24.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <fstream>

int main()
{
    std::cout << "\n**************** Question 24: Using Files—Numeric Processing ******************\n" << std::endl;

    std::ifstream inputFile;
    int nums;
    int sumCounter = 0;
    int numCounter = 0;

    inputFile.open("Random.txt");

    if (inputFile)
    {
        std::cout << "File opened successfully." << std::endl;
        while (inputFile >> nums)
        {
            std::cout << "Current index " << numCounter << ": Number: " << nums << std::endl;
            sumCounter += nums;
            numCounter++;
        };

    }
    else
    {
        std::cout << "File did not opened." << std::endl;
    }

    inputFile.close();

    double avgSumNum = static_cast<double> (sumCounter) / numCounter;

    std::cout << "\n--------- File Record -----------\n" << std::endl;
    std::cout << "Number of Random Numbers: " << numCounter << std::endl;
    std::cout << "Sum of all Numbers: " << sumCounter << std::endl;
    std::cout << "Average of all Number: " << avgSumNum << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}

