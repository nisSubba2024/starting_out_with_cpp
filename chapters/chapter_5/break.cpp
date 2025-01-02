/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: BREAK.CPP
 *      Written by Nishan Subba
 *      GitHub: @nisSubba2024
 *      Purpose: Learning about break and continue
 *      Last Date Modified: Jan 1, 2025
 * //////////////////////////////////////////////////////////////////////
*/

#include <iostream>

int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int star = 1; star <= 20; star++)
        {
            std::cout <<'*';

            if (star == 10)
            {
                break;
            }

        }
        std::cout << std::endl;
    }

    int testVal = 0;
    while (testVal++ < 10)
    {
        if (testVal == 4)
        {
            continue;
        }
        std::cout << testVal << " ";
    }
}