/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question27.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <fstream>
#include <random>

int main()
{
    std::cout << "\n**************** Question 27: Average Steps Taken ******************\n" << std::endl;

    // I could not find the file steps.txt from the companion website, so I will be creating a random number file
    // this fill will mimic the data from that file
    // the file will hold number of steps taken by a person tracked by their personal fitness tracker
    // the data will be for 1 year or 365 days
    // the first line in the data represents Jan 1, second Jab 2 and so on
    // It was year without a leap year so February has 28 days
    // I will assume that the person took about 8000 - 12000 steps per day

    std::ofstream outputFile;

    std::string fileName = "randomSteps.txt";

    outputFile.open(fileName);

    if (outputFile)
    {
        std::cout << "File created and opened successfully." << std::endl;
        for (int i = 0; i < 365; i++)
        {
            std::random_device randomEngine;
            std::uniform_int_distribution<int> randomInt(8000, 12000);
            int randomStep = randomInt(randomEngine);
            outputFile << randomStep << std::endl;
        }
        std::cout << "Data written successfully." << std::endl;
        outputFile.close();
    }

    /*
     * Days in each month
     * Jan 31
     * Feb 28
     * Mar 31
     * Apr 30
     * May 31
     * June 30
     * Jul 31
     * Aug 31
     * Sep 30
     * Oct 31
     * Nov 30
     * Dec 31
     */

    std::ifstream inputFile;

    inputFile.open(fileName);

    if (inputFile)
    {
        int stepsTaken;
        int totalSteps = 0;
        int counter = 0;
        int totalDays = 0;
        std::cout << "File opened successfully." << std::endl;

        std::cout << "\nJanuary Steps Record: " << std::endl;
        for (int i = 0; i < 31; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }
        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nFebruary Steps Record: " << std::endl;
        for (int i = 0; i < 28; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nMarch Steps Record: " << std::endl;
        for (int i = 0; i < 31; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nApril Steps Record: " << std::endl;
        for (int i = 0; i < 30; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nMay Steps Record: " << std::endl;
        for (int i = 0; i < 31; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nJune Steps Record: " << std::endl;
        for (int i = 0; i < 30; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nJuly Steps Record: " << std::endl;
        for (int i = 0; i < 31; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nAugust Steps Record: " << std::endl;
        for (int i = 0; i < 31; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nSeptember Steps Record: " << std::endl;
        for (int i = 0; i < 30; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nOctober Steps Record: " << std::endl;
        for (int i = 0; i < 31; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nNovember Steps Record: " << std::endl;
        for (int i = 0; i < 30; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;

        totalSteps = 0;
        counter = 0;

        std::cout << "\nDecember Steps Record: " << std::endl;
        for (int i = 0; i < 31; i++)
        {
            inputFile >> stepsTaken;
            totalSteps += stepsTaken;
            counter++;
            totalDays++;
        }

        std::cout << "Total Steps: " << totalSteps << std::endl;
        std::cout << "Total Days: " << counter << std::endl;
        std::cout << "Average Steps Taken: " << totalSteps / counter << std::endl;
        std::cout << "Total Days: " << totalDays << std::endl;
        std::cout << "Last step count: " << stepsTaken << std::endl;

        inputFile.close();
    }
    else
    {
        std::cout << "File could not be opened." << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
