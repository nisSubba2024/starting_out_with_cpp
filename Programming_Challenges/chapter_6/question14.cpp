/*
********************************************************************************
* File: 			questionX.cpp
* Author: 			Nishan Subba
* GitHub: 			nisSubba2024
* Create Data: 		Jan 3, 2025
*
* Description: 		Solution to chapter 5 programming challenges
********************************************************************************
*/


#include <iostream>

const int SPOOL_WIRE_COST = 100;

void getOrder(int& ordered, int& stock, double& shippingCharge);
void displayOrder(int ordered, int stock, double shippingCharge = 10.0);


int main()
{
    int ordered,
        stock;
    double shippingCharge;

    getOrder(ordered, stock, shippingCharge);
    displayOrder(ordered, stock, shippingCharge);

    return 0;
}


void getOrder(int& ordered, int& stock, double& shippingCharge)
{
    do
    {
        std::cout << "How many spools where ordered: ";
        std::cin >> ordered;
    }
    while (ordered < 1);

    do
    {
        std::cout << "How many stock of spools do you currently have: ";
        std::cin >> stock;
    }
    while (stock < 0);

    do
    {
        std::cout << "What is the shipping and handling change: ";
        std::cin >> shippingCharge;
    }
    while (shippingCharge < 0);
}

void displayOrder(int ordered, int stock, double shippingCharge)
{
    std::cout << "\n-------------- Order Status ------------------\n" << std::endl;

    if (ordered > stock)
    {
        std::cout << "Spools ready to ship: " << stock << std::endl;
        std::cout << "Backorder: " << ordered - stock << std::endl;
        std::cout << "Subtotal Spool charge: " << stock * SPOOL_WIRE_COST << std::endl;
        std::cout << "Total Shipping charge: " << shippingCharge * stock << std::endl;
        std::cout << "Total order costs: " << (stock * SPOOL_WIRE_COST + shippingCharge * stock) << std::endl;
    }
    else
    {
        std::cout << "Spools ready to ship: " << stock - ordered << std::endl;
        std::cout << "Backorder: " << 0 << std::endl;
        std::cout << "Subtotal Spool charge: " << ordered * SPOOL_WIRE_COST << std::endl;
        std::cout << "Total Shipping charge: " << shippingCharge * ordered << std::endl;
        std::cout << "Total order costs: " << (ordered * SPOOL_WIRE_COST + shippingCharge * ordered) << std::endl;
    }
}
