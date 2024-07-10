#include <iostream>
#include <cmath> 

using namespace std;

int reverseHelper(int n, int reversed = 0) {

    if (n == 0) {
        return reversed;
    }
    int lastDigit = n % 10;
    return reverseHelper(n / 10, reversed * 10 + lastDigit);
}

int reverseNumber(int n) {
    if (n == 0) return 0;
    
    return reverseHelper(n);
}

int main() {
    int num = 12345; 
    
    int reversed = reverseNumber(num);
    cout << "Reverse of " << num << " is: " << reversed << endl;
    
    return 0;
}
