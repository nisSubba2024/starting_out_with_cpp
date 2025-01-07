//
// Created by Nishan Subba on 1/5/25.
//

// reading a data from file into an array

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];

    std::string fileName = "TenNumbers.txt";
    std::ifstream inputFile;

    inputFile.open(fileName);



int count = 0;
    if (inputFile)
    {
        std::cout << "File opened successfully." << std::endl;
        // for (int i = 0; i < ARRAY_SIZE; i++)
        // {
        //     inputFile >> numbers[i];
        // }

        //using while loop
        while (count < ARRAY_SIZE && inputFile >> numbers[count])
        {
            count++;
        }
    }
    else
    {
        std::cout << "File could not be opened." << std::endl;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;

    inputFile.close();

    std::ofstream outputFile;
    std::string writeFile = "newTenNumbers.txt";

    outputFile.open(writeFile);
    if (outputFile)
    {
        std::cout << "File opened successfully for writing." << std::endl;
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            outputFile << numbers[i] << std::endl;
        }
    }
    else
    {
        std::cout << "File could not be opened." << std::endl;
    }

    outputFile.close();

    return 0;
}