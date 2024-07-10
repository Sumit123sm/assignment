#include<iostream>
using namespace std;

int main() {
    int arr[5][6] = {{0, 0, 0, 1, 1, 0},
                    {0, 0, 1, 1, 1, 1},
                    {0, 0, 0, 1, 1, 1},
                    {0, 1, 1, 1, 1, 1},
                    {0, 0, 0, 1, 1, 1}};
    
    int m = 5; // Number of rows
    int n = 6; // Number of columns
    
    int row = -1;
    int maxOnes = -1;
    int x = 1;
    
    for (int i = 0; i < m; i++) {
        int countOne = 0; // Number of ones in the ith row
        int lo = 0;
        int hi = n - 1;
        int firstInx = -1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[i][mid] == x) {
                if (mid == 0 || arr[i][mid - 1] != x) {
                    firstInx = mid;
                    break;
                } else {
                    hi = mid - 1;
                }
            } else if (arr[i][mid] < x) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        if (firstInx != -1) {
            countOne = n - firstInx;
        }
        
        if (maxOnes < countOne) {
            maxOnes = countOne;
            row = i;
        }
    }

    cout << "Row with the most ones is row " << row << " with " << maxOnes << " ones." << endl;

    return 0;
}
