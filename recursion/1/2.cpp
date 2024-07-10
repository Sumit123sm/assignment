#include <iostream>

using namespace std;

int sumOddNumbers(int a, int b) {
   
    if (a > b) {
        return 0;
    }
   
    if (a % 2 != 0) {
        return a + sumOddNumbers(a + 1, b);
    } else {
       
        return sumOddNumbers(a + 1, b);
    }
}

int main() {
    int a = 3; 
    int b = 7; 
    
    int sum = sumOddNumbers(a, b);
    cout << "Sum of all odd numbers from " << a << " to " << b << " is: " << sum << endl;
    
    return 0;
}
