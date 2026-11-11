
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

    double num1, num2;

    cout << "===== MINI CALCULATOR =====" << endl;

    cout << "Enter first decimal number: ";
    cin >> num1;

    cout << "Enter second decimal number: ";
    cin >> num2;

    cout << "\n===== CALCULATIONS =====" << endl;

    cout << "Sum: " << num1 + num2 << endl;

    cout << "Difference: " << num1 - num2 << endl;

    cout << "Product: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Quotient: " << num1 / num2 << endl;
    }
    else {
        cout << "Quotient: Cannot divide by zero!" << endl;
    }

    cout << "Minimum: " << min(num1, num2) << endl;

    cout << "Maximum: " << max(num1, num2) << endl;

    cout << "Power (first number raised to second): "
         << pow(num1, num2) << endl;

    if (num1 >= 0) {
        cout << "Square root of first number: "
             << sqrt(num1) << endl;
    }
    else {
        cout << "Square root of first number: Not possible "
             << "in real numbers." << endl;
    }

    int int1, int2;

    cout << "\n===== REMAINDER CALCULATION =====" << endl;

    cout << "Enter first integer: ";
    cin >> int1;

    cout << "Enter second integer: ";
    cin >> int2;

    if (int2 != 0) {
        cout << "Remainder: " << int1 % int2 << endl;
    }
    else {
        cout << "Remainder: Cannot divide by zero!" << endl;
    }

    // Extra challenge: Calculate area of a circle

    double radius;
    const double PI = 3.14159;

    cout << "\nEnter circle radius: ";
    cin >> radius;

    if (radius >= 0) {
        double area = PI * pow(radius, 2);

        cout << "Area of circle: " << area << endl;
    }
    else {
        cout << "Radius cannot be negative!" << endl;
    }

    return 0;
}

