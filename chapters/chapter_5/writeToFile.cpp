/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: WRITETOFILE.CPP
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
    std::ofstream testFile;
    testFile.open("testFile.txt");
    if (testFile)
    {
        std::cout << "Writing to file" << std::endl;
        testFile << "Bach\n";
        testFile << "Beethoven\n";
        testFile << "Mozart\n";
        testFile << "Schubert\n";
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }

    testFile.close();

    std::cout << "Done" << std::endl;

    return 0;
}