#include <iostream>

using namespace std;


int sumOfDigits(int n) {

    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num = 12345;
    
    int sum = sumOfDigits(num);
    cout << "Sum of the digits of " << num << " is: " << sum << endl;
    
    return 0;
}
