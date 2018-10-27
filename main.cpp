/*
Course : CS213 - Programming II  - 2018
Title  : Assignment I - Task 2 - Problem 9
Program: Complex Numbers
Purpose: Create a class that allow to declare variables
         of type complex and do some operations using it.

Author : Nada Nasser Al-Said El-Azab
ID     : 20170369

Date   : 22 October 2018
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    cout << boolalpha; // prints true or false instead of 1 and 0

    Complex _complex1 , _complex2  ;

    cout << "Write two Complex numbers : " << endl;
    cin  >> _complex1 >> _complex2;

    cout << "\nNow we have : \n";
    cout << "Complex1 = " << _complex1 << endl;
    cout << "Complex2 = " << _complex2 << endl;

    cout << endl;
    cout << "Some Operations : " << endl;
    cout << "_complex1 + _complex2  = " << _complex1 + _complex2    << endl;
    cout << "_complex1 - _complex2  = " << _complex1 - _complex2    << endl;
    cout << "_complex1 * _complex2  = " << _complex1 * _complex2    << endl;
    cout << "_complex1 == _complex2 = " << (_complex1 == _complex2) << endl;

    cout << i;

    return 0;
}
