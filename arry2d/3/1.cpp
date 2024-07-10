#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    
    unordered_set<int> zeroRows;
    unordered_set<int> zeroCols;
    
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                zeroRows.insert(i);
                zeroCols.insert(j);
            }
        }
    }
    
    
    for (int row : zeroRows) {
        for (int j = 0; j < n; ++j) {
            matrix[row][j] = 0;
        }
    }
    
   
    for (int col : zeroCols) {
        for (int i = 0; i < m; ++i) {
            matrix[i][col] = 0;
        }
    }
}


void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "Matrix after setting rows and columns to zero:" << endl;
    printMatrix(matrix);

    return 0;
}
