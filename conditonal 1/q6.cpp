#include <iostream>

using namespace std;

int main() {
    int marksA, marksB, marksC;

    // Input the marks of students A, B, and C
    cout << "Enter the marks of student A: ";
    cin >> marksA;
    cout << "Enter the marks of student B: ";
    cin >> marksB;
    cout << "Enter the marks of student C: ";
    cin >> marksC;

    // Determine the student with the least marks
    if (marksA <= marksB && marksA <= marksC) {
        cout << "Student A scored the least marks: " << marksA << endl;
    } else if (marksB <= marksA && marksB <= marksC) {
        cout << "Student B scored the least marks: " << marksB << endl;
    } else {
        cout << "Student C scored the least marks: " << marksC << endl;
    }

    return 0;
}
