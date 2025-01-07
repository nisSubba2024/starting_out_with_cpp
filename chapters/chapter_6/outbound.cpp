//
// Created by Nishan Subba on 1/5/25.
//

#include <iostream>

int main()
{
    const int SIZE = 3;
    int values[SIZE];

    for (int i = 0; i < 5; i++)
    {
        values[i] = 100;
    }

    std::cout << "The program did not crash" << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << values[i] << std::endl;

    return 0;
}