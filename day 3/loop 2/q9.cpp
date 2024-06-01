#include <iostream>

using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500:" << endl;
    for (int num = 1; num <= 500; ++num) {
        int originalNum, remainder, result = 0;

        originalNum = num;

        
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        
        if (result == num) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}
