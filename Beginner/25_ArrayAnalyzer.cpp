#include <iostream>     // iostream is used for input and output operations

using namespace std;

int main() {

    int numbers[100];
    int size;

    int sum = 0;
    int max, min;

    // Ask user for array size
    cout << "How many numbers will you enter? ";
    cin >> size;

    // Get numbers from user
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];

        // Add to sum immediately
        sum += numbers[i];
    }

    // Initialize min and max
    max = numbers[0];
    min = numbers[0];

    // Find min and max
    for (int i = 1; i < size; i++) {

        if (numbers[i] > max) {
            max = numbers[i];
        }

        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Display results
    cout << "\n===== ARRAY ANALYSIS =====\n";
    cout << "Sum: " << sum << endl;
    cout << "Average: " << (double)sum / size << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0; // End program
}