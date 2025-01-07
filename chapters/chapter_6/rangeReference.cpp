//
// Created by Nishan Subba on 1/5/25.
//
#include <iostream>


int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    for (int &val : numbers)
    {
        std::cout << "Enter an integer number: ";
        std::cin >> val;
    }

    for (int i : numbers)
    {
        std::cout << i << " ";
    }

    return 0;
}

//***************************************************************
//  The name is the                                             *
//                                                              *
//                                                              *
//***************************************************************