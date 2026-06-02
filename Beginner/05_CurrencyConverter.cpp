#include <iostream>  // Library for input and output operations
using namespace std;

int main() {

    // Variable to store amount in Turkish Lira (TL)
    double tl;

    // Variable to store user's menu choice
    int choice;

    // Fixed exchange rates (example values)
    double usd_rate = 45.93;  // 1 USD = 45.93 TL (example)
    double eur_rate = 53.45;  // 1 EUR = 53.45 TL (example)

    // Ask user to enter amount in TL
    cout << "TL amount: ";
    cin >> tl;

    // Display conversion menu
    cout << "\nSelect currency to convert:\n";
    cout << "1 - USD (Dollar)\n";
    cout << "2 - EUR (Euro)\n";

    // Get user's choice
    cout << "Choice: ";
    cin >> choice;

    // If user selects USD conversion
    if (choice == 1) {
        cout << "\nDollar: " << tl / usd_rate << " USD" << endl;
    }
    // If user selects EUR conversion
    else if (choice == 2) {
        cout << "\nEuro: " << tl / eur_rate << " EUR" << endl;
    }
    // If user enters invalid choice
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0; // End of program
}
