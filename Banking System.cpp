




#include <iostream>
using namespace std;

int main() {
   double balance = 0.0;
    int choice;
    double amount;

    do {
        // Display menu
        cout << "\n--- Banking System Menu ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Deposit money
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully.\n";
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;

            case 2:
                // Withdraw money
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Amount withdrawn successfully.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;

            case 3:
                // Check balance
                cout << "Your current balance is: $" << balance << "\n";
                break;

            case 4:
                // Exit the program
                cout << "Exiting the program. Thank you!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
