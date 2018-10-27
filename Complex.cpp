/*
Course : CS213 - Programming II  - 2018
Title  : Assignment I - Task 2 - Problem 9
Program: Complex Numbers
Purpose: Create a class that allow to declare variables
         of type complex and do some operations using it.

Author : Nada Nasser Al-Said El-Azab
ID     : 20170369

Date   : 22 October 2018
____________________________
*/

#include "Complex.h"

/// Constructors:-

// default constructor that store 0 in the real part and imaginary part
// to be in form (0+0*i)
Complex::Complex()
{
    real = 0;
    imaginary = 0;
}
//___________________________________________________
// The constructor take 2 parameters double a and b to store a in the real part
// and b imaginary part to be in form (a+b*i)
Complex::Complex(double a , double b)
{
    real = a;
    imaginary = b;
}
//___________________________________________________
// The constructor take 1 parameter double a to store it in the real part
// and 0 imaginary part to be in form (a+0*i)
Complex::Complex(double a){
    real = a;
    imaginary = 0;
}

///_________________________________________________________________________________________________________

///Public Functions :-

// returns 1 if the two complex numbers are equal and they are equal when the
// first real part = second real part  and the first imaginary part = second imagine part
bool Complex::operator == (Complex c2)
{
    if (this->real == c2.real && this->imaginary == c2.imaginary)
        return 1;
    else
        return 0;
}
//--------------------------------------------------------------------
// returns the sum of two complex numbers by adding the real part to the real part
//and the imagine part to the imagine part
Complex Complex::operator + (Complex c2)
{
    double r    = this -> real      + c2.real;
    double imgn = this -> imaginary + c2.imaginary;

    Complex sum(r,imgn);

    return sum;
}
//--------------------------------------------------------------------
// returns the subtract of two complex numbers by sub. the second real part from the first
// real part and the second imagine part from the first imagine part
Complex Complex::operator - (Complex c2)
{
    double r    = this -> real      - c2.real;
    double imgn = this -> imaginary - c2.imaginary;

    Complex sub(r,imgn);

    return sub;

}
//--------------------------------------------------------------------
// returns the product of two complex numbers that is given by the formula :-
// (real1 + imgn1 * i)*(real2 + imgn2 * i) = (real1 * real2 - imgn1 * imgn2) + (real_1 * imgn2 + imgn1 * real2)*i
Complex Complex::operator * (Complex c2)
{
    double r    = ((this -> real * c2.real) - (this -> imaginary * c2.imaginary));
    double imgn = ((this -> real * c2.imaginary) + (this -> imaginary * c2.real));

    Complex multiple(r,imgn);

    return multiple;
}

///_________________________________________________________________________________________________________

/// Friend Functions :-
//friend stream functions that allow us cin and cout the complex numbers directly as any type..
// :-

// it takes the real part and imaginary part from the user and store it in c1
// then return istream to be able to input more than one complex number. ex(cin >> c1 >> c2)
istream& operator>> (istream& in  , Complex& c1)
{
    cout << "Write the real part of the Complex number      : ";
    cin >> c1.real;

    cout << "Write the imaginary part of the Complex number : ";
    cin >> c1.imaginary;

    return in;
}
//------------------------------------------------------------------------------
// it prints the complex number in the form (a+b*i) a->is the real part , b->is the imaginary part
// then return ostream to be able to print more than one complex number. ex(cout << c1 << c2;)
ostream& operator << (ostream& out , Complex c1)
{
    if(c1==i) {
        out << "i = root(-1) "<< endl;
        return out;
    }

    // it doesn't print "+" if the sign of imagine part is negative
    out << "("<<c1.real << (c1.imaginary>0 ? " + " : "") << c1.imaginary << "*i)";
    return out;
}
///_________________________________________________________________________________________________________
