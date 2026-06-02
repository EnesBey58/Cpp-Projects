#include <iostream>  // Library for input and output operations
using namespace std;

int main()
{
    // Variables to store exam grades and average
    double exam1, exam2, exam3, average;

    // Get the first exam grade from the user
    cout << "Enter Exam 1 Grade: ";
    cin >> exam1;

    // Get the second exam grade from the user
    cout << "Enter Exam 2 Grade: ";
    cin >> exam2;

    // Get the third exam grade from the user
    cout << "Enter Exam 3 Grade: ";
    cin >> exam3;

    // Calculate the average of the three exams
    average = (exam1 + exam2 + exam3) / 3;

    // Display the average grade
    cout << "\nAverage: " << average << endl;

    // Determine the letter grade based on the average
    if (average >= 90)
        cout << "Grade: A";
    else if (average >= 80)
        cout << "Grade: B";
    else if (average >= 70)
        cout << "Grade: C";
    else if (average >= 60)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0; // End of program
}