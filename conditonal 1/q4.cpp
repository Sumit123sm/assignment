#include <iostream>

using namespace std;

int main() {
    double length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    if (area > perimeter) {
        cout << "The area of the rectangle is numerically greater than its perimeter." << endl;
    } else {
        cout << "The perimeter of the rectangle is numerically greater than its area." << endl;
    }

    return 0;
}
