/*
********************************************************************************
* File: 			question22.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>

bool isPrime(int num);

int main()
{
    int num;
    std::cout << "What number do you want to test: ";
    std::cin >> num;

    if (isPrime(num))
    {
        std::cout << num << " is a PRIME" << std::endl;
    }
    else
    {
        std::cout << num << " is NOT A PRIME" << std::endl;
    }

    return 0;
}

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
