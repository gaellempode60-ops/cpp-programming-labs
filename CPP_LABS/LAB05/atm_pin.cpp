
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int correctPIN = 1234;
    int enteredPIN;
    int attempts = 0;
    bool authenticated = false;

    // PIN authentication

    cout << "===== ATM SECURITY =====" << endl;

    for (attempts = 1; attempts <= 3; attempts++) {

        cout << "Enter your PIN: ";
        cin >> enteredPIN;

        if (enteredPIN == correctPIN) {

            cout << "PIN correct! Access granted."
                 << endl;

            authenticated = true;

            break;
        }
        else {

            cout << "Incorrect PIN!" << endl;

            cout << "Attempts remaining: "
                 << 3 - attempts << endl;
        }
    }

    // Deny access if PIN is incorrect

    if (!authenticated) {

        cout << "\nAccess denied!" << endl;
        cout << "Too many incorrect attempts." << endl;

        return 0;
    }

    // ATM operations

    double balance = 25000;
    double amount;
    int choice;

    do {

        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdrawal" << endl;
        cout << "4. Exit" << endl;

        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {

            case 1:

                cout << "Current balance: "
                     << fixed << setprecision(2)
                     << balance << " FCFA" << endl;

                break;

            case 2:

                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount > 0) {

                    balance += amount;

                    cout << "Deposit successful!" << endl;
                    cout << "New balance: "
                         << balance << " FCFA" << endl;
                }
                else {

                    cout << "Invalid deposit amount!" << endl;
                }

                break;

            case 3:

                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount <= 0) {

                    cout << "Invalid withdrawal amount!"
                         << endl;
                }

                else if (amount > balance) {

                    cout << "Insufficient balance!" << endl;
                }

                else {

                    balance -= amount;

                    cout << "Withdrawal successful!" << endl;
                    cout << "New balance: "
                         << balance << " FCFA" << endl;
                }

                break;

            case 4:

                cout << "Thank you for using our ATM."
                     << endl;

                break;

            default:

                cout << "Invalid menu option!" << endl;
        }

    } while (choice != 4);

    return 0;
}

