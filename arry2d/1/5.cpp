#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int findRowWithMaxSum(int matrix[][5], int rows, int cols) {
    int maxSum = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            rowIndex = i;
        }
    }
    
    return rowIndex;
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
    
    int rowWithMaxSum = findRowWithMaxSum(matrix, rows, cols);
    
    cout << "Row number with the maximum sum is: " << rowWithMaxSum << endl;
    
    return 0;
}
