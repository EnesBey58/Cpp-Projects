#include <iostream>  // Library for input and output operations
using namespace std;

int main() {

    int n;

    // Ask how many numbers user will enter
    cout << "How many numbers will you enter? ";
    cin >> n;

    // Array to store numbers
    int numbers[100];

    // Input numbers
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Initialize min and max with first element
    int min = numbers[0];
    int max = numbers[0];

    // Find min and max
    for (int i = 1; i < n; i++) {

        if (numbers[i] > max) {
            max = numbers[i];
        }

        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Display results
    cout << "\nSmallest number: " << min << endl;
    cout << "Largest number: " << max << endl;

    return 0;
}