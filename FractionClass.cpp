
#include <iostream>
using namespace std;

/*
    Class Declaration
*/
class Fraction
{
    int num; // numerator
    int den; // denominator

public:
    Fraction();                    // Default constructor
    Fraction(int n);               // Data 1 constructor
    Fraction(int n, int d);        // Data 2 constructor
    void Set(int n, int d);        // Setter
    void Get(int &n, int &d);      // Getter
    int GetNum() const;            // Get numerator
    int GetDen() const;            // Get denominator
    void Print(ostream &os) const; // ...
};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*
    Class Definition
*/

// default
Fraction::Fraction()
{
    cout << "Default" << endl;
    num = 0;
    den = 1;
}

// data1
Fraction::Fraction(int n)
{
    cout << "Data1" << endl;
    num = n;
    den = 1;
}

// data2
Fraction::Fraction(int n, int d)
{
    cout << "Data2" << endl;
    num = n;
    if (d == 0)
    {
        d = 1;
    }
    den = d;
}

// Setter
void Fraction::Set(int n, int d)
{
    num = n;
    if (d == 0)
    {
        d = 1;
    }
    den = d;
}

// Getter
void Fraction::Get(int &n, int &d)
{
    n = num;
    d = den;
}

// Get numerator
int Fraction::GetNum() const
{
    return num;
}

// Get denominator
int Fraction::GetDen() const
{
    return den;
}

// ...
void Fraction::Print(ostream &os) const
{
    os << num << "/" << den;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*
    Class Driver
*/

int main()
{
    Fraction f1;
    Fraction f2(5);
    Fraction f3(3, 4);

    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    f3.Print(cout);
    cout << endl;

    f3.Set(6, 7);
    f3.Print(cout);
    cout << endl;

    cout << "F2's denominator: " << f2.GetDen() << endl;

    return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
