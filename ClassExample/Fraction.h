#ifndef _FRACTION_H
#define _FRACTION_H

#include <iostream>
using namespace std;
//*************************
// Class Declaration
//*************************
class Fraction {
    int num;
    int den;
public:
    Fraction();              //default constructor
    Fraction(int n);         //Data 1 constructor
    Fraction(int n, int d);  //Data 2 constructor
    void Set(int n, int d); //Setter or Mutator
    void SetNum(int n);     //Setter
    void SetDen(int d);     //Setter
    void Get(int& n, int& d)const; //Getter or Accessor
    int GetNum()const;     //Getter
    int GetDen()const;     //Getter
    Fraction Mult(const Fraction& f2) const;
    Fraction Div(const Fraction& f2)const;

    Fraction operator*(const Fraction& f2) const;
    Fraction operator/(const Fraction& f2) const;
    Fraction operator+(const Fraction& f2) const;
    Fraction operator-(const Fraction& f2) const;

    void Print(ostream& os)const;
    friend ostream& operator<<(ostream& os, const Fraction& right);
    void Input(istream& is);
    //friend ? ? ? ? operotor >> (? ? ? ? ? );

};

#endif

