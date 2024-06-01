#include <iostream>

using namespace std;

int main() {
    int n;
    
   
    cout << "Enter the number of terms: ";
    cin >> n;

   
    int term = 4;  
    cout << "Arithmetic Progression (AP) with common difference 3:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << term << " ";
        term += 3;  // Increment by the common difference
    }
    cout << endl;

    return 0;
}
