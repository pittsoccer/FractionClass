
#include <iostream>
using namespace std;

//***********************
// Class Declaration
//***********************
class Fraction
{
    int num;
    int den;

public:
    // Constructors
    Fraction();             // Default Constructor
    Fraction(int n);        // Data 1 Constructor
    Fraction(int n, int d); // Data 2 Constructor
    // Setters
    void Set(int n, int d); // Setter
    void SetNum(int n);     // Setter
    void SetDen(int d);     // Setter
    // Getters
    void Get(int &n, int &d) const; // Getter
    int GetNum() const;             // Getter
    int GetDen() const;             // Getter
    // Arithmetic
    Fraction Mult(const Fraction &right) const; // Fraction Multiply
    Fraction Div(const Fraction &right) const;  // Fraction Divide
    // Print
    void Print(ostream &os) const;
};

//***********************
// Class Definition
//***********************

// Constructors
Fraction::Fraction()
{
    num = 0;
    den = 1;
}
Fraction::Fraction(int n)
{
    num = n;
    den = 1;
}
Fraction::Fraction(int n, int d)
{
    num = n;
    if (d == 0)
        d = 1;
    den = d;
}

// Getters
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

// Setters
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
        d = 1;
    den = d;
}

// Arithmetic
Fraction Fraction::Mult(const Fraction &right) const
{
    Fraction res;
    res.num = num * right.num;
    res.den = den * right.den;
    return res;
}
Fraction Fraction::Div(const Fraction &right) const
{
    Fraction res;
    res.num = num * right.den;
    res.den = den * right.num;
    return res;
}

// Print
void Fraction::Print(ostream &os) const
{
    os << num << "/" << den;
}

//***********************
// Driver
//***********************

int main()
{

    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction res;

    cout << "Before Mult: " << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    res.Print(cout);
    cout << endl;

    res = f1.Mult(f2);

    cout << "After Mult: " << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    res.Print(cout);
    cout << endl;

    res = f1.Div(f2);

    cout << "After Div: " << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    res.Print(cout);
    cout << endl;

    return 0;
}
