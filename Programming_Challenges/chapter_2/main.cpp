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


    // Question 8
    cout << "\n***** Question 8: Total Purchase *****" << endl;
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;
    const double SALETAX = 0.07;
    double preTaxTotal = item1 + item2 + item3 + item4 + item5;
    double totalTaxQ8 = preTaxTotal * SALETAX;
    double totalAmount = preTaxTotal + totalTaxQ8;
    cout << "Total subtotal: $" << preTaxTotal << "\nTotal Tax: $" << totalTaxQ8 << "\nTotal Amount: $" << totalAmount << endl;


    // Question 9
    cout << "\n***** Question 9: Cyborg Data Type Sizes *****" << endl;
    cout << "Char as " << sizeof(char) << " bytes" << endl;
    cout << "Int as " << sizeof(int) << " bytes" << endl;
    cout << "Float as " << sizeof(float) << " bytes" << endl;
    cout << "Double as " << sizeof(double) << " bytes" << endl;

    // Question 10
    cout << "\n***** Question 10: Miles per Gallon *****" << endl;
    int gallons = 15;
    int distanceLimit = 375;
    // Miles per gallon = miles driven / gallons usd
    double milesPerGallon = double(distanceLimit) / gallons;
    cout << "If car can hold " << gallons << " gallons and can travel " << distanceLimit << " miles before refueling, then its miles per gallon is " << milesPerGallon << endl;

    // Question 11
    cout << "\n***** Question 11: Distance per Tank of Gas *****" << endl;
    int carTank = 20;
    double avgCityMPG = 23.5;
    double avgHighwayMPG = 28.9;
    // distance = number of gallon x avg miles per gallon
    double cityDistance = avgCityMPG * carTank;
    double highwayDistance = avgHighwayMPG * carTank;
    cout << "Car with " << carTank << " gallons with: " << endl;
    cout << "Average city " << avgCityMPG << " miles per gallon will travel total of " << cityDistance << " miles" << endl;
    cout << "Average highway " << avgHighwayMPG << " miles per gallon will travel total of " << highwayDistance << " miles" << endl;

    // Question 12
    cout << "\n***** Question 12: Land Calculation *****" << endl;
    // one acres = 43,560 sq feet
    double oncAcre = 43560; // sq ft
    int totalLand = 391876;
    double totalAcre = totalLand / oncAcre;
    cout << "There are " << totalAcre << " acres in land with " << totalLand << " sq feet";

    // Question 13
    cout << "\n***** Question 13: Circuit Board Price *****" << endl;


    // Question 14
    cout << "\n***** Question 14: Personal Information *****" << endl;


    // Question 15
    cout << "\n***** Question 15: Triangle Pattern *****" << endl;


    // Question 16
    cout << "\n***** Question 16: Diamond Pattern *****" << endl;


    // Question 17
    cout << "\n***** Question 17: Stock Commission *****" << endl;


    // Question 18
    cout << "\n***** Question 18: Energy Drink Consumption *****" << endl;


    // Question 19
    cout << "\n***** Question 19: Annual High Temperatures *****" << endl;


    // Question 20
    cout << "\n***** Question 20: How Much Paint *****" << endl;

    return 0;
}
