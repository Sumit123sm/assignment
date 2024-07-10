#include <iostream>
using namespace std;

void displayMiddleRowAndColumn(int matrix[][7], int size) {
    int middleIndex = size / 2;

    cout << "Middle Row: ";
    for (int j = 0; j < size; j++) {
        cout << matrix[middleIndex][j] << " ";
    }
    cout << endl;

    cout << "Middle Column: ";
    for (int i = 0; i < size; i++) {
        cout << matrix[i][middleIndex] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 7; 
    int matrix[size][size];

    cout << "Enter the elements of the " << size << "x" << size << " matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    displayMiddleRowAndColumn(matrix, size);

    return 0;
}
