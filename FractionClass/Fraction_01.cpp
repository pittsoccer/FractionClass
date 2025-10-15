//*************************************
// Code from Class 9/8/2025
// Some Getter/Setter methods untested
//*************************************

#include <iostream>
using namespace std;
//*************************
// Class Declaration
//*************************
class Fraction
{
    int num;
    int den;

public:
    Fraction();                              // default constructor
    Fraction(int n);                         // Data 1 constructor
    Fraction(int n, int d);                  // Data 2 constructor
    void Set(int n, int d);                  // Setter
    void SetNum(int n);                      // Setter
    void SetDen(int d);                      // Setter
    void Get(int &n, int &d) const;          // Getter
    int GetNum() const;                      // Getter
    int GetDen() const;                      // Getter
    Fraction Mult(const Fraction &f2) const; // Fraction Multiply
    Fraction Div(const Fraction &f2) const;  // Fraction Divide
    void Print(ostream &os) const;
};

//*************************
// Class Definition
//*************************

Fraction::Fraction()
{
    cout << "Default" << endl;
    num = 0;
    den = 1;
}

Fraction::Fraction(int n)
{
    cout << "Data1" << endl;
    num = n;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    cout << "Data2" << endl;
    num = n;
    if (d == 0)
        d = 1;
    den = d;
}

void Fraction::Set(int n, int d)
{
    num = n;
    if (d == 0)
        d = 1;
    den = d;
}

void Fraction::SetNum(int n)
{
    num = n;
}

void Fraction::SetDen(int d)
{
    if (d == 0)
    {
        d = 1;
    }
    den = d;
}

void Fraction::Get(int &n, int &d) const
{
    n = num;
    d = den;
}
int Fraction::GetNum() const
{
    return num;
}
int Fraction::GetDen() const
{
    return den;
}

// mult
Fraction Fraction::Mult(const Fraction &f2) const
{
    Fraction res;

    res.num = num * f2.num;
    res.den = den * f2.den;

    return res;
}

// div
Fraction Fraction::Div(const Fraction &f2) const
{
    Fraction res;

    res.num = num * f2.den;
    res.den = den * f2.num;

    return res;
}

void Fraction::Print(ostream &os) const
{
    os << num << "/" << den;
}

//*************************
// Driver
//*************************

int main()
{
    Fraction result;
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    // output before mult
    cout << "BEFORE MULT" << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;

    // mult
    result = f1.Mult(f2);

    // output after mult
    cout << "AFTER MULT" << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;

    cout << endl;

    // output before div
    cout << "BEFORE DIV" << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;

    // div
    result = f1.Div(f2);

    // output after div
    cout << "AFTER DIV" << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;

    return 0;
}

// do add & subtract for portfolio
