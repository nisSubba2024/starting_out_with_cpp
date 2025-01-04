//
// Created by Nishan Subba on 1/3/25.
//

#include <iostream>

// prototype
void getThreeValues (int &, int &, int &);
int addThreeValues (int , int, int);
void changeNum(int &);

int main()
{
    int value1, value2, value3;

    getThreeValues (value1, value2, value3);

    std::cout << "sume of those numbers is "
    << addThreeValues(value1, value2, value3) << std::endl;

    changeNum (value1);

    std::cout << value1 << std::endl;

    return 0;
}

void getThreeValues (int &num1, int &num2, int &num3)
{
    std::cout << "Enter three values: ";
    std::cin >> num1 >> num2 >> num3;
}

int addThreeValues (int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

void changeNum(int &num)
{
    num = 100;
}