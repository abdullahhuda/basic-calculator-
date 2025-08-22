#include <iostream>   // library for input/output
using namespace std;  // avoid writing std:: all the time

int main() {
    double x,y,a;
    char z;
    cout << "Enter First Number: ";
    cin >> x;
    cout << "Choose Operation [*,+,-,/] : ";
    cin >> z;
    cout << "Enter Second Number: ";
    cin >> y;
    if (z == '*')
        a = x*y;
    else if (z == '+')
        a = x+y;
    else if (z == '-')
        a = x-y;
    else if (z == '/')
        a = x/y;
    else cout << "Incorrect Operation!";

    cout << a;
}
