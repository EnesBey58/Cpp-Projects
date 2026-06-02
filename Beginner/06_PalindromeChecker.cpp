#include <iostream>  // Library for input and output operations
using namespace std;

int main() {

    string text; // Variable to store user input text
    string reversedText = ""; // Variable to store reversed text

    // Ask user to enter a word or sentence
    cout << "Enter a word: ";
    cin >> text;

    // Reverse the input text
    for (int i = text.length() - 1; i >= 0; i--) {
        reversedText += text[i];
    }

    // Check if original text is equal to reversed text
    if (text == reversedText) {
        cout << "It is a Palindrome!" << endl;
    }
    else {
        cout << "It is NOT a Palindrome!" << endl;
    }

    return 0; // End of program
}