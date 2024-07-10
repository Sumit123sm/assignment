#include <iostream>
#include <climits>
using namespace std;

int findLargestElement(int matrix[][5], int rows, int cols) {
    int largest = INT_MIN;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }
    
    return largest;
}

int main() {
    const int rows = 3; 
    const int cols = 5; 
    
    int matrix[rows][cols];
    
    cout << "Enter the elements of the matrix (" << rows << " x " << cols << "):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int largest = findLargestElement(matrix, rows, cols);
    
    cout << "The largest element in the matrix is: " << largest << endl;
    
    return 0;
}
