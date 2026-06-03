#include <iostream>     // iostream is used for input and output operations

using namespace std;

int main() {

    int number;

    // Ask user for a number
    cout << "Enter a number for multiplication table: ";
    cin >> number;

    cout << "\n===== Multiplication Table =====\n";

    // Generate multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {

        // Print each line of the table
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0; // End of program
}