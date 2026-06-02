#include <iostream>   // iostream is used for input and output operations 

#include <string>     // string library is used to handle text (book names)
#include <string>

using namespace std;  // Allows using standard functions without writing std::


int main() {

    int choice;                 // Menu option selected by user
    string books[100];         // Array to store book names
    int bookCount = 0;         // Number of books currently in library

    while (true) {

        // Display menu options
        cout << "\n===== LIBRARY SYSTEM =====\n";
        cout << "1 - Add Book\n";
        cout << "2 - Show Books\n";
        cout << "3 - Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {

            // Add a new book to the library
            cout << "Enter book name: ";
            cin.ignore(); // Clear input buffer before getline

            // Read full line (book name can contain spaces)
            getline(cin, books[bookCount]);

            bookCount++; // Increase total book count
            cout << "Book added successfully!\n";
        }

        else if (choice == 2) {

            // Display all books stored in the library
            if (bookCount == 0) {
                cout << "No books in library.\n";
            }
            else {
                cout << "\nBook List:\n";

                // Loop through all stored books
                for (int i = 0; i < bookCount; i++) {
                    cout << i + 1 << ". " << books[i] << endl;
                }
            }
        }

        else if (choice == 3) {

            // Exit the program safely
            cout << "Exiting system..." << endl;
            break;
        }

        else {

            // Handle invalid menu input
            cout << "Invalid choice!" << endl;
        }
    }

    return 0; // End program successfully
}