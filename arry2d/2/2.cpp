#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            // Swap elements at (i, j) and (j, i)
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void reverseRows(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size / 2; j++) {
            // Swap elements at (i, j) and (i, size - j - 1)
            swap(matrix[i][j], matrix[i][size - j - 1]);
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int size = 3; 
    int matrix[size][size];

    cout << "Enter the elements of the " << size << "x" << size << " matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(matrix, size);

    transposeMatrix(matrix, size);
    reverseRows(matrix, size);

    cout << "Matrix after 90 degrees anti-clockwise rotation:" << endl;
    printMatrix(matrix, size);

    return 0;
}
