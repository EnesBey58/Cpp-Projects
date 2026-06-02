#include <iostream>  // Library for input and output operations
using namespace std;

int main() {

    // We choose a fixed secret number (no random for beginner level)
    int secretNumber = 42;

    int guess;

    cout << "=== Simple Number Guessing Game ===" << endl;

    // Loop until the user guesses correctly
    while (true) {

        // Ask user for a guess
        cout << "Guess a number: ";
        cin >> guess;

        // Check guess
        if (guess > secretNumber) {
            cout << "Too high!" << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low!" << endl;
        }
        else {
            cout << "Correct! You win!" << endl;
            break; // exit loop
        }
    }

    return 0;
}