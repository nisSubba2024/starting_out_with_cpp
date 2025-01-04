/*
********************************************************************************
* File: 			question11.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>

void getScore(int& testScore);
int findLowest(int score1, int score2, int score3, int score4, int score5);
void calcAverage(int score1, int score2, int score3, int score4, int score5);

int main()
{


    return 0;
}

void getScore(int& testScore)
{
    do
    {
        std::cout << "Enter a test score: ";
        std::cin >> testScore;
    } while (testScore < 0 || testScore > 100);
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    double scoreAverage = (static_cast<double> (score1 + score2 + score3 + score4 + score5)) / 5;

}


int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int lowest = score1;

    if (score2 < lowest)
    {
        lowest = score2;
    }
}