
#include <iostream>
using namespace std;

int main() {

    int mark;
    char choice;

    do {

        cout << "\n===== STUDENT GRADE CLASSIFICATION ====="
             << endl;

        cout << "Enter student's mark (0-100): ";
        cin >> mark;

        if (mark < 0 || mark > 100) {

            cout << "Invalid mark! Enter a mark "
                 << "between 0 and 100." << endl;

        }

        else {

            char grade;

            if (mark >= 80) {
                grade = 'A';
            }

            else if (mark >= 70) {
                grade = 'B';
            }

            else if (mark >= 60) {
                grade = 'C';
            }

            else if (mark >= 50) {
                grade = 'D';
            }

            else {
                grade = 'F';
                double mark1, mark2, mark3;

cout << "\nEnter three marks: ";
cin >> mark1 >> mark2 >> mark3;

double average = (mark1 + mark2 + mark3) / 3.0;

cout << "Average: " << average << endl;
            }

            cout << "Student's Mark: " << mark << endl;
            cout << "Grade: " << grade << endl;

            if (mark >= 50) {
                cout << "Result: PASS" << endl;
            }

            else {
                cout << "Result: FAIL" << endl;
            }
        }

        cout << "\nDo you want to enter another mark? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nProgram ended. Thank you!" << endl;

    return 0;
}

