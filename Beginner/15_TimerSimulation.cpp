#include <iostream>   // iostream is used for input and output operations 
#include <thread>   // For sleep function
#include <chrono>   // For time handling
using namespace std;

int main() {

    int seconds;

    // Ask user for timer duration
    cout << "Enter seconds for timer: ";
    cin >> seconds;

    cout << "\nTimer started...\n";

    // Countdown loop
    for (int i = seconds; i >= 0; i--) {

        cout << "Time left: " << i << " seconds" << endl;

        // Wait 1 second
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "Time's up!" << endl;

    return 0;
}