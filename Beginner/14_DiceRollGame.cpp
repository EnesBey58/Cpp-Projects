#include <iostream>   // iostream is used for input and output operations 
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;  // Allows using standard functions without writing std::


int main() {

    char choice;

    // Seed random number generator
    srand(time(0));

    cout << "===== DICE ROLL GAME =====\n";

    while (true) {

        cout << "\nRoll the dice? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {

            // Generate random number between 1 and 6
            int dice = (rand() % 6) + 1;

            cout << "You rolled: " << dice << endl;
        }
        else if (choice == 'n' || choice == 'N') {
            cout << "Game exited." << endl;
            break;
        }
        else {
            cout << "Invalid input!" << endl;
        }
    }

    return 0;
}