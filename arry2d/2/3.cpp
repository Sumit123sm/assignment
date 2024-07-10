#include <iostream>
using namespace std;

// Function to print the matrix in wave form
void printMatrixInWaveForm(int matrix[][3], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            // Traverse column from top to bottom
            for (int i = 0; i < rows; i++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // Traverse column from bottom to top
            for (int i = rows - 1; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    const int rows = 3; // Number of rows in the matrix
    const int cols = 3; // Number of columns in the matrix

    int matrix[rows][cols];

    cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix in wave form:" << endl;
    printMatrixInWaveForm(matrix, rows, cols);

    return 0;
}
