#include <iostream>  // iostream is used for input and output operations

#include <string>    // string is used for handling text (password)

using namespace std;

int main() {

    string password;

    // Ask user for password
    cout << "Enter your password: ";
    cin >> password;

    int length = password.length();

    bool hasDigit = false;
    bool hasLetter = false;

    // Check each character in password
    for (int i = 0; i < length; i++) {

        if (isdigit(password[i])) {
            hasDigit = true;
        }

        if (isalpha(password[i])) {
            hasLetter = true;
        }
    }

    cout << "\nPassword Strength: ";

    // Determine strength
    if (length >= 8 && hasDigit && hasLetter) {
        cout << "Strong" << endl;
    }
    else if (length >= 6) {
        cout << "Medium" << endl;
    }
    else {
        cout << "Weak" << endl;
    }

    return 0;
}