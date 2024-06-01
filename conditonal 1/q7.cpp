#include <iostream>

using namespace std;

int main() {
    double x, y;

    // Input the coordinates of the point
    cout << "Enter the x-coordinate of the point: ";
    cin >> x;
    cout << "Enter the y-coordinate of the point: ";
    cin >> y;

    // Check if the point lies on the x-axis, y-axis, or at the origin
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin." << endl;
    } else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else {
        cout << "The point does not lie on the x-axis, y-axis, or at the origin." << endl;
    }

    return 0;
}
