#include <iostream>     // iostream is used for input and output operations

using namespace std;

int main() {

    int count;
    double number;
    double sum = 0;
    double average;

    // Ask user how many numbers will be entered
    cout << "How many numbers do you want to enter? ";
    cin >> count;

    // Get numbers from user and calculate the sum
    for (int i = 1; i <= count; i++) {

        cout << "Enter number " << i << ": ";
        cin >> number;

        sum += number;
    }

    // Calculate average
    average = sum / count;

    // Display result
    cout << "\nAverage: " << average << endl;

    return 0; // End of program
}