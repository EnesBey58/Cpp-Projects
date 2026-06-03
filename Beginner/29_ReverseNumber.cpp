#include <iostream>     // iostream is used for input and output operations
using namespace std;

int main() {

    int number, reversed = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {

        int digit = number % 10;      // get last digit
        reversed = reversed * 10 + digit;
        number = number / 10;         // remove last digit
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}