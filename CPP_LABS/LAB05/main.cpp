
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

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
                cout << "\nYour current balance is: "
                     << fixed << setprecision(2)
                     << balance << " FCFA" << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance = balance + amount;

                    cout << "Deposit successful!" << endl;
                    cout << "New balance: "
                         << balance << " FCFA" << endl;
                }
                else {
                    cout << "Invalid deposit! "
                         << "Amount must be positive." << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid withdrawal! "
                         << "Amount must be positive." << endl;
                }
                else if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                }
                else {
                    balance = balance - amount;

                    cout << "Withdrawal successful!" << endl;
                    cout << "New balance: "
                         << balance << " FCFA" << endl;
                }
                break;

            case 4:
                cout << "\nThank you for using our ATM."
                     << endl;
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid option! "
                     << "Please choose between 1 and 4."
                     << endl;
        }

    } while (choice != 4);

    return 0;
}

