#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int mark;
    char grade;

    cout << "Enter the student's full name: ";
    getline(cin, studentName);

    cout << "Enter the student's mark (0-100): ";
    cin >> mark;

    if (mark < 0 || mark > 100) {
        cout << "Invalid mark. Please enter a value between 0 and 100." << endl;
        return 1; 
    }

    int switchValue = mark / 10;

    switch (switchValue) {
        case 10:
        case 9:
        case 8:
            grade = 'A';
            break;
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        case 5:
            grade = 'D';
            break;
        case 4:
            grade = 'E';
            break;
        default:
            grade = 'F';
    }

    cout << "Student: " << studentName << "\nGrade: " << grade << endl;

    return 0;
}
