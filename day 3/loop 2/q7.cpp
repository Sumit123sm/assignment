#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Enter the value of n: ";
    cin >> n;

  
    cout << "Factorials of the first " << n << " numbers:" << endl;
    for (int i = 1; i <= n; ++i) {
        long long factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j; 
        }
        cout << "Factorial of " << i << " = " << factorial << endl;
    }

    return 0;
}
