#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the a value: ";
    cin >> a;
    cout << "Enter the b value: ";
    cin >> b;

    // Arithmetic Operators
    cout << "The value of a + b = " << a + b << endl;
    cout << "The value of a - b = " << a - b << endl;
    cout << "The value of a * b = " << a * b << endl;
    cout << "The value of a / b = " << a / b << endl;
    cout << "The value of a % b = " << a % b << endl;
    cout << endl;

    // Increment & Decrement Operators
    cout << "The value of a++ = " << a++ << endl; 
    cout << "The value of a-- = " << a-- << endl; 
    cout << "The value of ++a = " << ++a << endl; 
    cout << "The value of --a = " << --a << endl; 
    cout << endl;

    // Comparison operators 
    cout << "The value of a == b = " << (a == b) << endl;
    cout << "The value of a != b = " << (a != b) << endl;
    cout << "The value of a <= b = " << (a <= b) << endl;
    cout << "The value of a >= b = " << (a >= b) << endl;
    cout << "The value of a < b = " << (a < b) << endl;
    cout << "The value of a > b = " << (a > b) << endl; 
    cout << endl;

    // Logical operators
    cout << "The value of ((a == b ) && (a < b)) = " << ((a == b) && (a < b)) << endl;
    cout << "The value of ((a == b ) || (a < b)) = " << ((a == b) || (a < b)) << endl;
    cout << "The value of (!(a == b)) = " << (!(a == b)) << endl;

    return 0; 
}