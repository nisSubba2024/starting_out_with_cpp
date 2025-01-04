//
// Created by Nishan Subba on 1/3/25.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::showpoint;
using std::fixed;
using std::setprecision;

void getChoice(char&);
double calcWeeklyPaid(int, double);
double calcWeeklyPaid(double);

int main()
{
    char selection;
    int worked;
    double rate,
           yearly;

    cout << fixed << showpoint << setprecision(2);

    cout << "Do you want to calculate the weekly pay of an" << endl;
    cout << "(H) an hourly paid employee or " << endl;
    cout << "(S) an salaried employee?" << endl;
    getChoice(selection);

    switch (selection)
    {
        case 'H':
        case 'h':
            cout << "How many hours were worked? ";
            cin >> worked;
            cout << "What is the hourly pay rate? ";
            cin >> rate;
            cout << "The gross weekly pay is $";
            cout << calcWeeklyPaid(worked, rate) << endl;
            break;

        case 'S':
        case 's':
            cout << "What is the annual salary? ";
            cin >> yearly;
            cout << "The gross weekly pay is $";
            cout << calcWeeklyPaid(yearly) << endl;
            break;

        default:
            cout << "Please enter a valid selection." << endl;
            break;
    }

    return 0;
}

void getChoice(char& letter)
{
    // get the user choice
    cout << "Enter your chocice: ";
    cin >> letter;

    while (letter != 'H' && letter != 'h' && letter != 'S' && letter != 's')
    {
        cout << "Please enter H or S: ";
        cin >> letter;
    }
}

double calcWeeklyPaid(int hours, double payRate)
{
    return hours * payRate;
}

double calcWeeklyPaid(double annSalary)
{
    return annSalary / 52;
}
