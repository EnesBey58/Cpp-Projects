// iostream is used for input and output operations
#include <iostream>

using namespace std;

int main() {

    double productPrice;
    int quantity;
    double totalBill;

    // Ask user for product price
    cout << "Enter product price: ";
    cin >> productPrice;

    // Ask user for quantity
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total bill
    totalBill = productPrice * quantity;

    // Display result
    cout << "\n===== BILL =====" << endl;
    cout << "Product Price: " << productPrice << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Amount: " << totalBill << endl;

    return 0; // End of program
}