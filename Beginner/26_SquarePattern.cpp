#include <iostream>     // iostream is used for input and output operations

using namespace std;

int main() {

    int size;

    // Ask user for square size
    cout << "Enter square size: ";
    cin >> size;

    cout << "\n===== Square Pattern =====\n";

    // Outer loop for rows
    for (int i = 1; i <= size; i++) {

        // Inner loop for columns
        for (int j = 1; j <= size; j++) {
            cout << "* ";
        }

        cout << endl; // Move to next line
    }

    return 0; // End program
}