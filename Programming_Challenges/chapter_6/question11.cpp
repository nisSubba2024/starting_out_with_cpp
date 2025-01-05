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
    int score1,
        score2,
        score3,
        score4,
        score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

void getScore(int& testScore)
{
    do
    {
        std::cout << "Enter a test score: ";
        std::cin >> testScore;
    }
    while (testScore < 0 || testScore > 100);
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    int lowestScore = findLowest(score1, score2, score3, score4, score5);
    double averageScore = 0.0;
    if (lowestScore == score1)
    {
        averageScore = (static_cast<double>(score2) + score3 + score4 + score5) / 4;
    }
    else if (lowestScore == score2)
    {
        averageScore = (static_cast<double>(score1) + score3 + score4 + score5) / 4;
    }
    else if (lowestScore == score3)
    {
        averageScore = (static_cast<double>(score1) + score2 + score4 + score5) / 4;
    }
    else
    {
        averageScore = (static_cast<double>(score1) + score2 + score3 + score4) / 4;
    }

    std::cout << "The average score is " << averageScore << std::endl;
}


int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
    {
        return score1;
    }
    else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
    {
        return score2;
    }
    else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
    {
        return score3;
    }
    else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
    {
        return score4;
    }
    else
    {
        return score5;
    }
}
