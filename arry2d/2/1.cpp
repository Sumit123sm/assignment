#include <iostream>
using namespace std;

void printDiagonals(int matrix[][3], int size) {
    cout << "Main Diagonal: ";
    for (int i = 0; i < size; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary Diagonal: ";
    for (int i = 0; i < size; i++) {
        cout << matrix[i][size - i - 1] << " ";
    }
    cout << endl;
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

    printDiagonals(matrix, size);

    return 0;
}
