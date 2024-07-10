#include <iostream>
#include <vector>
using namespace std;


void computePrefixSum(const vector<vector<int>>& matrix, vector<vector<int>>& prefixSum) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    prefixSum.resize(n + 1, vector<int>(m + 1, 0));
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefixSum[i][j] = matrix[i - 1][j - 1]
                            + prefixSum[i - 1][j]
                            + prefixSum[i][j - 1]
                            - prefixSum[i - 1][j - 1];
        }
    }
}


int getSubmatrixSum(const vector<vector<int>>& prefixSum, int l1, int r1, int l2, int r2) {
    return prefixSum[l2 + 1][r2 + 1]
         - prefixSum[l1][r2 + 1]
         - prefixSum[l2 + 1][r1]
         + prefixSum[l1][r1];
}

int main() {
    int n, m;
    
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    vector<vector<int>> prefixSum;
    computePrefixSum(matrix, prefixSum);
    
    int l1, r1, l2, r2;
    cout << "Enter the coordinates (l1, r1) and (l2, r2): ";
    cin >> l1 >> r1 >> l2 >> r2;
    
   
    if (l1 < 0 || r1 < 0 || l2 >= n || r2 >= m || l1 > l2 || r1 > r2) {
        cout << "Invalid coordinates" << endl;
        return 1;
    }
    
    int sum = getSubmatrixSum(prefixSum, l1, r1, l2, r2);
    
    cout << "Sum of the submatrix from (" << l1 << ", " << r1 << ") to (" << l2 << ", " << r2 << ") is: " << sum << endl;
    
    return 0;
}
