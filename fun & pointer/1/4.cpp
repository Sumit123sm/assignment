#include <iostream>
#include <cmath> // For pow() function
using namespace std;

// Function to count the number of digits in a number and print its square
void countDigitsAndPrintSquare(int number) {
    // Handle negative numbers by taking the absolute value
    int absNumber = abs(number);
    
    // Count digits
    int count = 0;
    do {
        count++;
        absNumber /= 10;
    } while (absNumber > 0);
    
    // Calculate the square of the number
    long long square = static_cast<long long>(number) * number;
    
    // Print the results
    cout << "Number of digits in " << number << " is: " << count << endl;
    cout << "Square of " << number << " is: " << square << endl;
}

int main() {
    int number;
    
    // Input the number
    cout << "Enter a number: ";
    cin >> number;
    
    // Call the function
    countDigitsAndPrintSquare(number);
    
    return 0;
}
