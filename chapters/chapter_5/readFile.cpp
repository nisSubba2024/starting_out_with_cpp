/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: READFILE.CPP
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
    std::string name;

    inputFile.open("friends.txt");
    if (inputFile.is_open())
    {
        std::cout << "Reading data from the file. " << std::endl;

        inputFile >> name; // read the name 1 from the file
        std::cout << "Friend 1: " << name << std::endl;

        inputFile >> name; // read name 2
        std::cout << "Friend 2: " << name << std::endl;

        inputFile >> name; // read name 3
        std::cout << "Friend 3: " << name << std::endl;
    }
    else
    {
        std::cout << "Unable to open the file." << std::endl;
    }

    inputFile.close();
    return 0;
}
