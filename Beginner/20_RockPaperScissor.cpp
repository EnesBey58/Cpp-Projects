#include <iostream> // iostream is used for input and output operations

#include <cstdlib>  // cstdlib is used for rand() and srand()

#include <ctime>    // ctime is used for time()

using namespace std;

int main() {

    int playerChoice;
    int computerChoice;

    // Seed random number generator
    srand(time(0));

    cout << "===== ROCK PAPER SCISSORS =====" << endl;

    cout << "1 - Rock" << endl;
    cout << "2 - Paper" << endl;
    cout << "3 - Scissors" << endl;

    cout << "\nEnter your choice: ";
    cin >> playerChoice;

    // Generate random choice for computer (1-3)
    computerChoice = rand() % 3 + 1;

    cout << "\nComputer chose: ";

    if (computerChoice == 1)
        cout << "Rock" << endl;
    else if (computerChoice == 2)
        cout << "Paper" << endl;
    else
        cout << "Scissors" << endl;

    // Check game result
    if (playerChoice == computerChoice) {
        cout << "It's a Draw!" << endl;
    }
    else if ((playerChoice == 1 && computerChoice == 3) ||
             (playerChoice == 2 && computerChoice == 1) ||
             (playerChoice == 3 && computerChoice == 2)) {
        cout << "You Win!" << endl;
    }
    else if (playerChoice >= 1 && playerChoice <= 3) {
        cout << "Computer Wins!" << endl;
    }
    else {
        cout << "Invalid Choice!" << endl;
    }

    return 0; // End of program
}