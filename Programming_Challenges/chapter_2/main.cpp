/*
 * //////////////////////////////////////////////////////////////////////
 *      PROGRAM: MAIN.CPP
 *      Written by Nishan Subba
 *      GitHub: @nisSubba2024
 *      Purpose: These are the solutions to programming challenges from chapter 2
 *      Book: Starting Out With C++ BY Tony Gaddis, 10th Edition
 *      Last Date Modified: Dec 30, 2024
 * //////////////////////////////////////////////////////////////////////
 */

#include <iostream>

using namespace std;

int main()
{
    // Question 1: Sum of Two Numbers
    cout << "***** Question 1: Sum of Two Number *****" << endl;
    int num1 = 50;
    int num2 = 100;
    int total = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2
        << " is " << total << endl;

    // Question 2
    cout << "\n***** Question 2: Sales Prediction *****" << endl;
    const double TOTALSALESPERCENTAGE = 0.58;
    int totalSales = 8'600'000;
    double salesGenerated = totalSales * TOTALSALESPERCENTAGE;
    cout << "The East Coast will generate total sales of " << salesGenerated << endl;

    // Question 3
    cout << "\n***** Question 3: Sales Tax *****" << endl;
    int amount = 95;
    const double STATESALETAX = 0.04;
    const double COUNTRYSALETAX = 0.02;
    double totalSaleTax = amount * STATESALETAX * COUNTRYSALETAX;
    cout << "The total sale tax " << amount << " is " << totalSales << endl;

    // Question 4
    cout << "\n***** Question 4: Restaurant Bill *****" << endl;
    double bill = 88.67;
    const double TAX = 0.0675;
    double totalTax = bill * TAX;
    const double TIP = 0.2;
    double totalTip = (totalTax + bill) * TIP;
    double totalMealCost = totalTax + totalTip + bill;
    cout << "Meal cost:  $" << bill << "\nTotal Tax: $" << totalTax << "\nTip: $" << totalTip << "\nTotal Bill: $" <<
        totalMealCost << endl;


    // Question 5
    cout << "\n***** Question 5: Average of Values *****" << endl;
    int val1 = 28;
    int val2 = 32;
    int val3 = 37;
    int val4 = 24;
    int val5 = 33;
    int sum = val1 + val2 + val3 + val4 + val5;
    double average = double(sum) / 5;
    cout << "Average of " << val1 << ", " << val2 << ", " << val3 << ", " << val4 << ", " << val5
        << " is " << average << endl;

    // Question 6
    cout << "\n***** Question 6: Annual Pay *****" << endl;
    int payAmount = 2200;
    int payPeriod = 26;
    int annualPay = payAmount * payPeriod;
    cout << "Bi-Weekly pay: $" << payAmount << "\nPay Period in a year: " << payPeriod << "\nAnnual Pay: $" << annualPay
        << endl;

    // Question 7
    cout << "\n***** Question 7: Ocean Levels *****" << endl;
    double risingRate = 1.5; // Ocean level is rising at 1.5 millimeters per year
    double oceanLevelsIn5Years = risingRate * 5;
    double oceanLevelsIn7Years = risingRate * 7;
    double oceanLevelsIn10Years = risingRate * 10;
    cout << "If ocean's level is currently rising at " << risingRate << " millimeter per years, then: " << endl;
    cout << "In 5 years, the ocean's level will be risen by " << oceanLevelsIn5Years << " millimeter" << endl;
    cout << "In 7 years, the ocean's level will be risen by " << oceanLevelsIn7Years << " millimeter" << endl;
    cout << "In 10 years, the ocean's level will be risen by " << oceanLevelsIn10Years << " millimeter" << endl;


    return 0;
}
