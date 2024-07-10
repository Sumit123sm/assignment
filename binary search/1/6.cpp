#include <iostream>

using namespace std;

int arrangeCoins(int n) {
    int left = 0, right = n;  
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  
        long long coinsNeeded = (long long)mid * (mid + 1) / 2; 
        if (coinsNeeded == n) {
            return mid;  
        } else if (coinsNeeded < n) {
            left = mid + 1;  
        } else {
            right = mid - 1;  
        }
    }
    
    return right; 
}

int main() {
    int n = 5; 
    cout << "Number of complete rows: " << arrangeCoins(n) << endl;
    return 0;
}
