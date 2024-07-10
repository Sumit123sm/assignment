#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;
    
    // Input the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Call the function to calculate the area
    double area = calculateArea(radius);
    
    // Output the result
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    
    return 0;
}
