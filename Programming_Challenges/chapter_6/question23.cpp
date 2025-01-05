/*
********************************************************************************
* File: 			question23.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>
#include <fstream>
#include <string>

bool isPrime(int num);

int main()
{
    std::ofstream outputFile;
    std::string fileName = "primeNumbers.txt";

    outputFile.open(fileName);

    if (outputFile)
    {
        std::cout << "File created and successfully opened" << std::endl;
        outputFile << "List of all PRIME number from 1 to 100. " << std::endl;
        for (int i = 2; i <= 100; i++)
        {
            if (isPrime(i))
            {
                outputFile << i << std::endl;
            }
        }

        std::cout << "Data written to file. " << std::endl;
    }
    else
    {
        std::cout << "File could not be opened" << std::endl;
    }


    return 0;
}

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
