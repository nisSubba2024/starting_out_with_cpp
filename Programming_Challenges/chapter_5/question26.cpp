/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question26.cpp
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
    std::cout << "\n**************** Question 26: Personal Web Page Generator ******************\n" << std::endl;

    std::string name, description;
    std::ofstream outputFile;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Describe yourself: ";
    std::getline(std::cin, description);

    outputFile.open("profile.html");
    // Julie Taylor
    // I am a computer science major, a member of the Jazz club,and I hope to work as a mobile app developer after I graduate.

    if (outputFile)
    {
        std::cout << "File created and opened successfully." << std::endl;
        outputFile << "<html>\n"
        << "<head>\n"
        << "</head>\n"
        <<"<body>\n"
        << "\t<center>\n"
        << "\t\t<h1>" << name
        << "</h1>\n"
        << "\t<center>\n"
        << "\t<hr>\n"
        << "\t\t" << description
        << "\n\t<hr>\n"
        << "</body>\n"
        << "</html>\n" << std::endl;

        std::cout << "Data added to file" << std::endl;
    }
    else
    {
        std::cout << "File could not be opened." << std::endl;
    }

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
