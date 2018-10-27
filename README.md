# C-Complex-Numbers-class
It allows to declare variables of type complex and do some operations using it.

EXample :-
#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
    Complex _complex1 , _complex2  ;
    cout << "Write two Complex numbers : " << endl;
    cin  >> _complex1 >> _complex2;
    cout << "_complex1 + _complex2  = " << _complex1 + _complex2    << endl;
    return 0;
}

