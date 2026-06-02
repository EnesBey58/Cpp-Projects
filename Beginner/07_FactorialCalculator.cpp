#include <iostream>  // Library for input and output operations
using namespace std;

int main() {

    int number;
    long long factorial = 1; // factorial can grow big, so we use long long

    // Ask user for a number
    cout << "Enter a number: ";
    cin >> number;

    // Factorial cannot be negative
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {

        // Multiply numbers from 1 to n
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        // Show result
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0; // End of program
}