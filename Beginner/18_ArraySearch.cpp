#include <iostream>     // iostream is used for input and output operations

using namespace std;

int main() {

    int numbers[100];
    int size;
    int target;
    bool found = false;

    // Ask user for array size
    cout << "How many numbers will you enter? ";
    cin >> size;

    // Get array elements from user
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Ask for the number to search
    cout << "\nEnter the number to search: ";
    cin >> target;

    // Search the number in the array
    for (int i = 0; i < size; i++) {

        if (numbers[i] == target) {
            cout << "Number found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    // If number is not found
    if (!found) {
        cout << "Number not found in the array." << endl;
    }

    return 0; // End of program
}