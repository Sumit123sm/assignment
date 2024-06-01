#include <iostream>

using namespace std;

int main() {
    int n;
    
   
    cout << "Enter the number of terms: ";
    cin >> n;

    
    int term = 3; 
    cout << "Geometric Progression (GP) with common ratio 4:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << term << " ";
        term *= 4; 
    }
    cout << endl;

    return 0;
}
