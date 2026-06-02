#include <iostream>  // Library for input and output operations
using namespace std;

int main() {

    int number;
    bool isPrime = true;

    // Ask user for a number
    cout << "Enter a number: ";
    cin >> number;

    // Numbers less than 2 are not prime
    if (number < 2) {
        isPrime = false;
    }
    else {
        // Check divisibility from 2 to number/2
        for (int i = 2; i <= number / 2; i++) {

            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Result output
    if (isPrime) {
        cout << number << " is a Prime Number." << endl;
    }
    else {
        cout << number << " is NOT a Prime Number." << endl;
    }

    return 0;
}