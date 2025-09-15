
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

    // Arithmetic (ver1)
    Fraction Mult(const Fraction &right) const; // Fraction Multiply
    Fraction Div(const Fraction &right) const;  // Fraction Divide
    Fraction Add(const Fraction &right) const;  // Fraction Add
    Fraction Sub(const Fraction &right) const;  // Fraction Subtract

    // Arithmetic (ver2)
    // Fraction operator*(const Fraction &right) const; // Fraction Multiply
    // Fraction operator/(const Fraction &right) const; // Fraction Divide
    // Fraction operator+(const Fraction &right) const; // Fraction Add
    // Fraction operator-(const Fraction &right) const; // Fraction Subtract

    // Print
    void Print(ostream &os) const;

    // Input
    void Input(istream &is);
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
Fraction Fraction::Mult(const Fraction &right) const // multiply
{
    Fraction res;
    res.num = num * right.num;
    res.den = den * right.den;
    return res;
}
Fraction Fraction::Div(const Fraction &right) const // divide
{
    Fraction res;
    res.num = num * right.den;
    res.den = den * right.num;
    return res;
}
//!!!
Fraction Fraction::Add(const Fraction &right) const // add
{
    Fraction res;
    res.num = num + right.den;
    res.den = den + right.num;
    return res;
}
Fraction Fraction::Sub(const Fraction &right) const // subtract
{
    Fraction res;
    res.num = num - right.den;
    res.den = den - right.num;
    return res;
}

// Print
void Fraction::Print(ostream &os) const
{
    os << num << "/" << den;
}

// Input
void Fraction::Input(istream &is)
{
    char slash;

    is >> num;
    is >> slash;
    is >> den;
}

//***********************
// Driver
//***********************

int main()
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction res;

    // Input
    cout << "Enter Fraction #1 in the form n/d: ";
    f1.Input(cin);
    cout << "Enter Fraction #2 in the form n/d: ";
    f2.Input(cin);

    cout << "Before: " << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    res.Print(cout);
    cout << endl;

    // Mult
    res = f1.Mult(f2);
    // res = f1.operator*(f2);
    // res = f1 * f2;

    cout << endl;
    cout << "After Mult: " << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    res.Print(cout);
    cout << endl;

    // Div
    res = f1.Div(f2);

    cout << endl;
    cout << "After Div: " << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    res.Print(cout);
    cout << endl;

    // Add
    res = f1.Add(f2);

    cout << endl;
    cout << "After Add: " << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    res.Print(cout);
    cout << endl;

    // Sub
    res = f1.Sub(f2);

    cout << endl;
    cout << "After Sub: " << endl;
    f1.Print(cout);
    cout << endl;
    f2.Print(cout);
    cout << endl;
    res.Print(cout);
    cout << endl;

    return 0;
}

/*
    Friend Functions
    - In a C++ class, we can declare a function as a friend function.
    - The friend function can access private members of said class.
    - Friend functions do not have calling objects, all data will come in via the parameter list.
*/

/*
    Portfolio
    - Driver
*/
