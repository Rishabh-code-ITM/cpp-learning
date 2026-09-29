#include <iostream>  // Header file for input-output
using namespace std; // So we don't need to write std:: before cout

void sum() { // User-defined function
    int e = 15;
    cout << "\nValue of e inside sum() is " << e;
}

int main() { // Program execution starts from main()
    int a = 10;  // Declaring integer variable a
    int b = 15;  // Declaring integer variable b
    // int a = 10, b = 15; // Shortcut when data types are same
    float c = 1.245; // Declaring float variable
    char d = '*';  // Declaring character variable
    bool is_true = true; // Declaring boolean variable

    cout << "The value of a is " << a << ".\nThe value of b is " << b; // Printing a and b
    cout << "\nThe value of c is " << c;  // Printing c
    cout << "\nThe value of d is " << d;  // Printing d
    cout << "\nThe value of is_true is " << is_true;  // Will print 1 for true

    sum(); // Calling sum function

    return 0; // Successful exit
}