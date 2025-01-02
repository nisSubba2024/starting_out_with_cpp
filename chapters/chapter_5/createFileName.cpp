/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: CREATEFILENAME.CPP
 *      Written by Nishan Subba
 *      GitHub: @nisSubba2024
 *      Purpose: Learning I/O Operation
 *      Last Date Modified: Jan 1, 2025
 * //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream inputFile;
    std::string fileName;
    double value;
    int counter = 1;

    std::cout << "Enter the filename: ";
    std::cin >> fileName;
    std::cout << "File name: " << fileName << std::endl;

    // open the file
    inputFile.open(fileName);

    if (inputFile)
    {
        std::cout << "File opened successfully." << std::endl;
        while (inputFile >> value)
        {
            std::cout << "Number item " << counter << ": " << value << std::endl;
            counter++;
        }

        // close the file
        inputFile.close();
    }
    else
    {
        std::cout << "File could not be opened." << std::endl;
    }

    return 0;
}
