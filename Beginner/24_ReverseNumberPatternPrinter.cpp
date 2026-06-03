// iostream is used for input and output operations
#include <iostream>

using namespace std;

int main() {

    int rows;

    // Ask user for number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "\n===== Reverse Number Pattern =====\n";

    // Outer loop controls rows (from input down to 1)
    for (int i = rows; i >= 1; i--) {

        // Inner loop prints numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl; // Move to next line
    }

    return 0; // End of program
}