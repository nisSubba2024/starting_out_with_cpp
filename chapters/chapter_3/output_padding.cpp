/*
* //////////////////////////////////////////////////////////////////////
 *      PROGRAM: OUTPUT_PADDING.CPP
 *      Written by Nishan Subba
 *      GitHub: @nisSubba2024
 *      Purpose: Look at right-justified padding
 *      Last Date Modified: Dec 30, 2024
 * //////////////////////////////////////////////////////////////////////
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1 = 2897, num2 = 5, num3 = 837, num4 = 34, num5 = 7, num6 = 1623, num7 = 390, num8 = 3456, num9 = 12;

    // display first row
    cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;

    // display second row
    cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;


    // display third row
    cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl;

    double value = 123.515464151;
    cout << setprecision(6) << fixed << "{" << value << "}" << endl;
//{123.515464}

    double value1 = 123.5;
    cout << setprecision(6) << fixed << showpoint << "{" << value1 << "}" << endl;
//{123.500000}

    double x = 146.789, y = 24.2, z = 1.783;
    cout << setw(10) << x << endl;
    cout << setw(10) << y << endl;
    cout << setw(10) << z << endl;
    // 146.789000
    //  24.200000
    //   1.783000
    double x1 = 146.789, y1 = 24.2, z1 = 1.783;
    cout << left << setw(10) << x1 << endl;
    cout << setw(10) << y1 << endl;
    cout << setw(10) << z1 << endl;
    // 146.789000
    // 24.200000
    // 1.783000
    return 0;

    /*
     *
    *  2897     5   837
        34      7  1623
        390  3456    12
    */
}
