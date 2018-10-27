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
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

// Class that allow to declare variables
// of type complex and do some operations using it.
class Complex // real + imagine * i
{
    /// Friend Functions
    //friend stream functions that allow us cin and cout the complex numbers directly as any type..
    // :-
    friend istream& operator>> (istream& in  , Complex& c1);
    // it takes the real part and imaginary part from the user and store it in c1
    // then return istream to be able to input more than one complex number. ex(cin >> c1 >> c2)

    friend ostream& operator<< (ostream& out , Complex c1);
    // it prints the complex number in the form (a+b*i) a->is the real part , b->is the imaginary part
    // then return ostream to be able to print more than one complex number. ex(cout << c1 << c2;)
//________________________________________________________________________________________________
    public:
        //Constructors:-
        Complex();
        // default constructor that store 0 in the real part and imaginary part
        // to be in form (0+0*i)

        Complex(double a , double b);
        // The constructor take 2 parameters double a and b to store a in the real part
        // and b imaginary part to be in form (a+b*i)

        Complex(double a);
        // The constructor take 1 parameter double a to store it in the real part
        // and 0 imaginary part to be in form (a+0*i)
        //__________________________________________________________________

        //Public Functions :-
        bool operator == (Complex);
        // returns 1 if the two complex numbers are equal and they are equal when the
        // first real part = second real part  and the first imaginary part = second imagine part

        Complex operator + (Complex);
        // returns the sum of two complex numbers by adding the real part to the real part
        //and the imagine part to the imagine part

        Complex operator - (Complex);
        // returns the subtract of two complex numbers by sub. the second real part from the first
        // real part and the second imagine part from the first imagine part

        Complex operator * (Complex);
        // returns the product of two complex numbers that is given by the formula :-
        // (real1 + imgn1 * i)*(real2 + imgn2 * i) = (real1 * real2 - imgn1 * imgn2) + (real_1 * imgn2 + imgn1 * real2)*i

    private:
        double real; // To store the real part of the complex numbers
        double imaginary; // To store the imagine part of the complex numbers

};

const Complex i(0,1);


#endif // COMPLEX_H
