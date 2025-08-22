#include <iostream>   // library for input/output
using namespace std;  // avoid writing std:: all the time

double calculate(double x, double y, char z) {
    if (z == '*')
       return x*y;
    else if (z == '+')
        return x+y;
    else if (z == '-')
        return x-y;
    else if (z == '/')
        return x/y;
    else cout << "Incorrect Operation!";
}

int main() {
    double x,y,a;
    char z;
    cout << "Enter First Number: ";
    cin >> x;
    cout << "Choose Operation [*,+,-,/] : ";
    cin >> z;
    cout << "Enter Second Number: ";
    cin >> y;
    cout << "Result: " << calculate(x,y,z);
}
