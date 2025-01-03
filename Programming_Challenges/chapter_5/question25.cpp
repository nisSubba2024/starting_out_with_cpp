/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question25.cpp
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
    std::cout << "\n**************** Question 25: Using Files—Student Line Up ******************\n" << std::endl;

    std::ifstream inputFile;
    std::string names, firstStudent, lastStudent;

    inputFile.open("LineUp.txt");

    if (inputFile)
    {
        std::cout << "File opened successfully" << std::endl;

        inputFile >> names;
        firstStudent = lastStudent = names;

        while (inputFile >> names)
        {
            std::cout << "Name: " << names << std::endl;

            if (firstStudent > names)
            {
                firstStudent = names;
            }
            else if (lastStudent < names)
            {
                lastStudent = names;
            }
        }
    }
    else
    {
        std::cout << "Error opening file" << std::endl;
    }

    inputFile.close();

    std::cout << "First student in line: " << firstStudent << std::endl;
    std::cout << "Last student in line: " << lastStudent << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
