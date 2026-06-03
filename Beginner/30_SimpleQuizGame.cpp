#include <iostream>
using namespace std;

int main() {

    int score = 0;
    char answer;

    cout << "===== SIMPLE QUIZ GAME =====\n";

    // Question 1
    cout << "\n1) What is 2 + 2?\n";
    cout << "A. 3\nB. 4\nC. 5\n";
    cout << "Your answer: ";
    cin >> answer;

    // Check answer (correct: B)
    if (answer == 'B' || answer == 'b') {
        score++;
    }

    // Question 2
    cout << "\n2) What is the capital of Turkey?\n";
    cout << "A. Istanbul\nB. Ankara\nC. Izmir\n";
    cout << "Your answer: ";
    cin >> answer;

    // Check answer (correct: B)
    if (answer == 'B' || answer == 'b') {
        score++;
    }

    // Final score
    cout << "\nYour score: " << score << "/2" << endl;

    return 0;
}