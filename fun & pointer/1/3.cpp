#include <iostream>
using namespace std;

// Function to print all odd numbers between a and b
void printOddNumbers(int a, int b) {
    // Ensure a is less than b
    if (a > b) {
        cout << "Invalid range. Ensure that a is less than b." << endl;
        return;
    }
    
    // Print all odd numbers between a and b
    for(int i = a; i <= b; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            cout << i << " ";
        }
    }
    cout << endl; // To end the line after printing all odd numbers
}

int main() {
    int a, b;
    
    // Input the two numbers
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;
    
    // Call the function to print odd numbers
    printOddNumbers(a, b);
    
    return 0;
}
