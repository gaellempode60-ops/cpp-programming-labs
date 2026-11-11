
#include <iostream>
using namespace std;

int main() {

    int number;
    int n;
    int sum = 0;


    cout << "===== MULTIPLICATION TABLE =====" << endl;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= 12; i++) {

        cout << number << " x " << i
             << " = " << number * i << endl;
    }



    cout << "\n===== SUM OF INTEGERS =====" << endl;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 1) {

        cout << "Please enter a positive integer." << endl;

    }
    else {

        for (int i = 1; i <= n; i++) {

            sum = sum + i;
        }

        cout << "Sum from 1 to " << n
             << " = " << sum << endl;
    }



    cout << "\n===== CONTINUE STATEMENT =====" << endl;

    cout << "Numbers from 1 to 30 excluding multiples of 3:"
         << endl;

    for (int i = 1; i <= 30; i++) {

        if (i % 3 == 0) {

            continue;
        }

        cout << i << " ";
    }

    cout << endl;



    cout << "\n===== BREAK STATEMENT =====" << endl;

    cout << "Searching for the first number divisible "
         << "by both 5 and 7..." << endl;

    for (int i = 1; ; i++) {

        if (i % 5 == 0 && i % 7 == 0) {

            cout << "First common multiple: "
                 << i << endl;

            break;
        }
    }


    return 0;
}

