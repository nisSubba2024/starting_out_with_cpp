//
// Created by Nishan Subba on 1/3/25.
//
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::setprecision;
using std::setw;
using std::showpoint;

int square(int);
double square(double);

int main()
{
    int userInt;
    double userDouble;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter an integer and floating number: ";
    cin >> userInt >> userDouble;

    cout << "Here are squared values: " << endl;
    cout << square(userInt) << " and " << square(userDouble) << endl;

    return 0;
}

// function overloading

int square(int number)
{
    return number*number;
}

double square(double number)
{
    return number*number;
}