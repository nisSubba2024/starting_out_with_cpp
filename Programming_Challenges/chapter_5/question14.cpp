/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question14.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "\n**************** Question 14: Student Line Up ******************\n" << std::endl;

    int numOfStudents;
    std::string names;
    std::string firstStudent,
                lastStudent;

    std::cout << "How many students in the class: ";
    std::cin >> numOfStudents;


    while (numOfStudents < 1 || numOfStudents > 25)
    {
        std::cout << "Invalid input, please try again: " << std::endl;
        std::cout << "How many students in the class: ";
        std::cin >> numOfStudents;
    }

    for (int i = 1; i <= numOfStudents; i++)
    {
        std::cout << "Student " << i << " name: ";
        std::cin >> names;

        if (i == 1)
        {
            firstStudent = names;
            lastStudent = names;
        }
        else
        {
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

    std::cout << "First student is: " << firstStudent << std::endl;
    std::cout << "Last student is: " << lastStudent << std::endl;

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
