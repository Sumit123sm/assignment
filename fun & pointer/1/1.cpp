#include <iostream>
using namespace std;

// Function to print squares of the first n natural numbers
void printSquares(int n) {
    for(int i = 1; i <= n; i++) {
        cout << "Square of " << i << " is " << i * i << endl;
    }
}

int main() {
    int n;
    
    // Input the number of natural numbers to square
    cout << "Enter the number of natural numbers: ";
    cin >> n;
    
    // Call the function to print squares
    printSquares(n);
    
    return 0;
}
