#include <iostream>
#include <cmath>  

using namespace std;

bool isPerfectSquare(int n) {
    if (n < 0) return false; 
    
    int sqrt_n = (sqrt(n));  
    return (sqrt_n * sqrt_n == n);  
}

int main() {
    int n ;
    cin>>n;
    if (isPerfectSquare(n)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
