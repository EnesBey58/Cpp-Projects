#include <iostream>   // iostream is used for input and output operations 
#include <string>     // string library is used to handle text (book names)

using namespace std;  // Allows using standard functions without writing std::

int main() {

    // Predefined username and password
    string correctUsername = "admin";
    string correctPassword = "admin";

    string username;
    string password;

    int attempts = 3; // Number of allowed login attempts

    // Allow user 3 attempts to login
    while (attempts > 0) {

        cout << "\n===== LOGIN SYSTEM =====\n";

        // Get username from user
        cout << "Enter username: ";
        cin >> username;

        // Get password from user
        cout << "Enter password: ";
        cin >> password;

        // Check credentials
        if (username == correctUsername && password == correctPassword) {
            cout << "Login successful! Welcome " << username << endl;
            break;
        }
        else {
            attempts--; // Reduce remaining attempts
            cout << "Wrong username or password!" << endl;
            cout << "Remaining attempts: " << attempts << endl;
        }

        // If attempts are over
        if (attempts == 0) {
            cout << "Account locked!" << endl;
        }
    }

    return 0;
}