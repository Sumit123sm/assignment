#include <iostream>
#define PI 3.14159

using namespace std;

int main() {
    double radius = 10.0;

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    if (radius > 2) {
        cout << "The area of the circle is numerically larger than the circumference." << endl;
    } else {
        cout << "The circumference of the circle is numerically larger than the area." << endl;
    }

    return 0;
}
