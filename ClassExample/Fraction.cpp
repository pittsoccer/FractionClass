#include "Fraction.h"

//*************************
// Class Definition
//*************************

Fraction::Fraction() {
    cout << "Default" << endl;
    num = 0;
    den = 1;
}

Fraction::Fraction(int n) {
    cout << "Data1" << endl;
    num = n;
    den = 1;
}

Fraction::Fraction(int n, int d) {
    cout << "Data2" << endl;
    num = n;
    if (d == 0)
        d = 1;
    den = d;
}

void Fraction::Set(int n, int d) {
    num = n;
    if (d == 0)
        d = 1;
    den = d;
}

void Fraction::SetNum(int n) {
    num = n;
}
void Fraction::SetDen(int d) {
    if (d == 0)
        d = 1;
    den = d;
}

void Fraction::Get(int& n, int& d)const {
    n = num;
    d = den;
}
int Fraction::GetNum()const {
    return num;
}
int Fraction::GetDen()const {
    return den;
}


Fraction Fraction::Mult(const Fraction& right) const {
    Fraction res;
    res.num = num * right.num;
    res.den = den * right.den;
    return res;
}

Fraction Fraction::operator*(const Fraction& right) const {
    Fraction res;
    res.num = num * right.num;
    res.den = den * right.den;
    return res;
}
Fraction Fraction::operator/(const Fraction& f2) const {
    Fraction res;
    res.num = num * f2.den;
    res.den = den * f2.num;
    return res;
}
Fraction Fraction::operator+(const Fraction& f2) const {
    Fraction res;
    res.den = den * f2.den;
    res.num = (num * f2.den) + (den * f2.num);

    return res;
}
Fraction Fraction::operator-(const Fraction& f2) const {
    Fraction res;
    res.den = den * f2.den;
    res.num = (num * f2.den) - (den * f2.num);

    return res;

}


Fraction Fraction::Div(const Fraction& f2)const {
    Fraction res;
    res.num = num * f2.den;
    res.den = den * f2.num;
    return res;
}
void Fraction::Print(ostream& os)const {
    os << num << "/" << den;
}

ostream& operator<<(ostream& os, const Fraction& right) {
    os << right.num << "/" << right.den;
    return os;
}

void Fraction::Input(istream& is) {
    char slash;
    is >> num;
    is >> slash;
    is >> den;
}