/*
*  /////////////////////////////////////////////////////////////////////
 *  Program: Programming_Challenges/Chapter_5/question21.cpp
 *  Written by Nishan Subba
 *  GitHub: @nisSubba2024
 *  Purpose: Solutions to programming challenges for chapter 5
 *  Last Date Modified: Jan 2, 2025
 *  //////////////////////////////////////////////////////////////////////
*/

#include <iostream>
#include <random>

int main()
{
    std::cout << "\n**************** Question 21: Random Number Guessing Game Enhancement ******************\n" <<
        std::endl;

    std::random_device rn;
    std::uniform_int_distribution<int> randomInt(0, 100);

    int randomNumber = randomInt(rn);
    int randomGuess;
    int counter = 0;

    // Even though you are not supposed to show random number, it's there to test out the code
    std::cout << "The random number is: " << randomNumber << std::endl;

    do
    {
        std::cout << "Guess a number between 0 and 100: ";
        std::cin >> randomGuess;

        counter++;

        if (randomGuess > randomNumber)
        {
            std::cout << "Too high, try again: " << std::endl;
        }
        else if (randomGuess < randomNumber)
        {
            std::cout << "Too low, try again: " << std::endl;
        }
        else if (randomGuess == randomNumber)
        {
            std::cout << "You got it!" << std::endl;
            std::cout << "Number of guesses: " << counter << std::endl;
        }

    }
    while (randomGuess != randomNumber);

    std::cout << "\n******************* End of Question ***********************\n" << std::endl;

    return 0;
}
