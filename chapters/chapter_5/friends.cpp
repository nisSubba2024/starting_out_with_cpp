/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: FRIENDS.CPP
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
    std::ofstream friendList;
    std::string friend1,
                friend2,
                friend3;

    std::cout << "Enter the names of three friends" << std::endl;
    std::cout << "Friend #1: ";
    std::cin >> friend1;

    std::cout << "Friend #2: ";
    std::cin >> friend2;

    std::cout << "Friend #3: ";
    std::cin >> friend3;

    // open the file
    friendList.open("friends.txt");

    if (friendList)
    {
        friendList << friend1 << std::endl;
        friendList << friend2 << std::endl;
        friendList << friend3 << std::endl;
    }

    // close the file
    friendList.close();

    std::cout << "The names were saved to a file" << std::endl;

    return 0;
}
