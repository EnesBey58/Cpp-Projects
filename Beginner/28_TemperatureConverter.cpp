#include <iostream>     // iostream is used for input and output operations
using namespace std;

int main() {

    double celsius;
    double fahrenheit;
    double kelvin;

    // Ask user for temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    // Formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Convert Celsius to Kelvin
    // Formula: K = C + 273.15
    kelvin = celsius + 273.15;

    // Display results
    cout << "\n===== CONVERSION RESULTS =====\n";
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;

    return 0; // End of program
}