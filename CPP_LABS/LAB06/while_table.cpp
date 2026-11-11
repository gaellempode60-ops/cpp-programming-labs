
#include <iostream>
using namespace std;

int main() {

    int number;
    int i = 1;

    cout << "Enter a number: ";
    cin >> number;

    cout << "\n===== MULTIPLICATION TABLE ====="
         << endl;

    while (i <= 12) {

        cout << number << " x " << i
             << " = " << number * i << endl;

        i++;
    }

    return 0;
}

