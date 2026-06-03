#include <iostream>    // iostream is used for input and output

#include <string>      // string is used to store text

using namespace std;

int main() {

    string text;

    // Ask user for a text
    cout << "Enter a text: ";
    getline(cin, text);

    cout << "Reversed text: ";

    // Print characters from the end to the beginning
    for (int i = text.length() - 1; i >= 0; i--) {
        cout << text[i];
    }

    cout << endl;

    return 0; // End of program
}