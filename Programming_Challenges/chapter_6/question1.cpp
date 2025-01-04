#include <iostream>

double calculateRetail(double price, double markup);

int main()
{
	double price,
		 markup;
	
	do
	{
	std::cout << "Enter wholesale price: ";
	std::cin >> price;

	std::cout << "Enter markup percentage: ";
	std::cin >> markup;
	}
	while (price < 0 || markup < 0);

	std::cout << "Wholesale price: " << price << std::endl;
	std::cout << "Markup percentage: " << markup <<std::endl;
	std::cout << "Retail price: " << calculateRetail(price, markup) << std::endl;

	return 0;
};

double calculateRetail(double price, double markup)
{
	return price + (price * (markup/100));
};

