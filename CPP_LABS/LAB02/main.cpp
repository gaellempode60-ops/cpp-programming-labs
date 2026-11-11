
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    string fullName, department;
    int age, studentID;
    double registrationFee;
    bool feesPaid;

    cout << "===== STUDENT REGISTRATION =====" << endl;

    cout << "Enter student ID: ";
    cin >> studentID;

    cout << "Enter age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Enter department: ";
    getline(cin, department);

    cout << "Enter registration fee: ";
    cin >> registrationFee;

    cout << "Have you paid the fees? (1 = Yes, 0 = No): ";
    cin >> feesPaid;

    cout << "\n\n===== REGISTRATION RECEIPT =====" << endl;

    cout << "Student ID: " << studentID << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Age: " << age << endl;
    cout << "Department: " << department << endl;

    cout << fixed << setprecision(2);
    cout << "Registration Fee: " << registrationFee
         << " FCFA" << endl;

    cout << "Fees Paid: "
         << (feesPaid ? "Yes" : "No") << endl;

    cout << "================================" << endl;

    return 0;
}

