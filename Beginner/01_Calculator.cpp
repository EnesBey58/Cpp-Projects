#include <iostream>  // Library for input and output operations
using namespace std;

int main() {

    // Variables to store user input
    double a, b;   // Using double for decimal numbers
    char op;       // Operator (+, -, *, /)

    // Ask user for the first number
    cout << "First number: ";
    cin >> a;

    // Ask user for the operator
    cout << "Operator (+, -, *, /): ";
    cin >> op;

    // Ask user for the second number
    cout << "Second number: ";
    cin >> b;

    // Start checking the operation type

    if (op == '+') {
        // Addition
        cout << "Rgit add .esult: " << a + b;
    }
    else if (op == '-') {
        // Subtraction
        cout << "Result: " << a - b;
    }
    else if (op == '*') {
        // Multiplication
        cout << "Result: " << a * b;
    }
    else if (op == '/') {
        // Division
        if (b != 0) {
            // Prevent division by zero
            cout << "Result: " << a / b;
        }
        else {
            // Error message
            cout << "Error: Division by zero";
        }
    }
    else {
        // Invalid operator input
        cout << "Invalid operator";
    }

    return 0; // End of program
}