#include <iostream>     // iostream is used for input and output operations

using namespace std;

int main() {

    int rows;

    // Ask user for number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "\n===== Number Pattern =====\n";

    // Outer loop controls rows
    for (int i = 1; i <= rows; i++) {

        // Inner loop prints numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl; // Move to next line
    }

    return 0; // End of program
}