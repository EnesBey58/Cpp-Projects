#include <iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;

    // Ask user for the upper limit
    cout << "Enter a number (N): ";
    cin >> n;

    // Add all numbers from 1 to N
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0; // End of program
}