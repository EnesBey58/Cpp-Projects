#include <iostream>   // iostream is used for input and output operations 

using namespace std;  // Allows using standard functions without writing std::

int main() {

    int choice;
    double balance = 1000.0; // Initial account balance
    double amount;

    while (true) {

        // Display ATM menu
        cout << "\n===== ATM MENU =====\n";
        cout << "1 - Check Balance\n";
        cout << "2 - Deposit Money\n";
        cout << "3 - Withdraw Money\n";
        cout << "4 - Exit\n";
        cout << "Choose: ";
        cin >> choice;

        // Check balance
        if (choice == 1) {
            cout << "Your balance: " << balance << " TL" << endl;
        }

        // Deposit money
        else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0) {
                balance += amount;
                cout << "Money deposited successfully." << endl;
            }
            else {
                cout << "Invalid amount!" << endl;
            }
        }

        // Withdraw money
        else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            }
            else if (amount <= 0) {
                cout << "Invalid amount!" << endl;
            }
            else {
                balance -= amount;
                cout << "Please take your money." << endl;
            }
        }

        // Exit system
        else if (choice == 4) {
            cout << "Exiting ATM..." << endl;
            break;
        }

        // Invalid input
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}