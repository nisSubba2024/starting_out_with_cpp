//
// Created by Nishan Subba on 1/1/25.
//

// This program uses a switch statement to determine the items selected from a menu

#include <iostream>

int main()
{
    int choice; // to hold a menu choice
    int months; // to hold the number of months
    double charges; // to hold the monthly charges

    // constants for membership rates
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;

    // constant for menu choice
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    // display the menu and get a choice
    std::cout << "\t\tHealth Club Membership Menu\n\n"
        << "1. Standard Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
        case ADULT_CHOICE:
            std::cout << "For how many months? ";
            std::cin >> months;
            charges = months * ADULT;
            std::cout << "The total charges are $" << charges << std::endl;
            break;

        case CHILD_CHOICE:
            std::cout << "For how many months? ";
            std::cin >> months;
            charges = months * CHILD;
            std::cout << "The total charges are $" << charges << std::endl;
            break;

        case SENIOR_CHOICE:
            std::cout << "For how many months? ";
            std::cin >> months;
            charges = months * SENIOR;
            std::cout << "The total charges are $" << charges << std::endl;
            break;

        case QUIT_CHOICE:
            std::cout << "Program ending. \n ";
            break;

        default:
            std::cout << "The valid choices are 1 through 4. Run the\n"
                << "program again and select the one of those. \n";
    }

    return 0;
}
