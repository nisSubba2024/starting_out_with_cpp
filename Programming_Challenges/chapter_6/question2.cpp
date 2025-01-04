/*
********************************************************************************
* File: 			question2.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges, question2.cpp
********************************************************************************
*/


#include <iostream>

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);


int main()
{
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);

    displayData(length, width, area);

    return 0;
}

double getLength()
{
    double length;
    do
    {
        std::cout << "Enter Length: ";
        std::cin >> length;
    }
    while (length <= 0);

    return length;
}

double getWidth()
{
    double width;
    do
    {
        std::cout << "Enter Width: ";
        std::cin >> width;
    }
    while (width <= 0);

    return width;
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double length, double width, double area)
{
    std::cout << "************* Area of Rectangle ***************" << std::endl;
    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Area: " << area << std::endl;
}
