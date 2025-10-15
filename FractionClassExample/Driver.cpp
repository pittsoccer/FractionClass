
#include "Fraction.h"

#include <iostream>
using namespace std;


//*************************
// Driver
//*************************

int main() {
    Fraction res;
    Fraction f1;
    Fraction f2;
    cout << "enter Fraction 1 in the form n/d: ";
    f1.Input(cin);
    cout << "enter Fraction 2 in the form n/d: ";
    f2.Input(cin);


    char op = 'q';
    cout << " Pick from: *, /, +, -, q" << endl;
    cin >> op;

    while (op != 'q' && op != 'Q') {

        cout << "BEFORE OPERATION" << endl;
        //f1.Print(cout); cout << endl;
        cout << f1 << endl;
        //f2.Print(cout); cout << endl;
        cout << f2 << endl;

        switch (op) {
        case '*': res = f1 * f2; break;
        case '/': res = f1 / f2; break;
        case '+': res = f1 + f2; break;
        case '-': res = f1 - f2; break;
        default: cout << "Invalid operator, choose again." << endl;
        }

        cout << "AFTER OPERATION" << endl;
        cout << f1 << " " << op << " " << f2 << " == " << res << endl;
        f1.Print(cout); cout << endl;
        f2.Print(cout); cout << endl;
        res.Print(cout); cout << endl;

        cout << " Pick from: *, /, +, -, q" << endl;
        cin >> op;
    }


    return 0;
}
