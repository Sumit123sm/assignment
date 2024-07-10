#include <iostream>

using namespace std;


int countWays(int n) {
    // Base cases
    if (n == 0) return 1; 
    if (n < 0) return 0;  
    
    // Recursive cases
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

int main() {
    int n = 5; // Example input
    
    int ways = countWays(n);
    cout << "Number of ways to reach the " << n << "th stair is: " << ways << endl;
    
    return 0;
}
