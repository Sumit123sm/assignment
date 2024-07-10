#include <iostream>

using namespace std;

void printSequence(int current, int n) {
    // Base case
    if (current > n) {
        return;
    }

    cout << current << " ";
    
    printSequence(current + 1, n);
    
    if (current != n) {
        cout << current << " ";
    }
}

int main() {
    int n = 5; 
    printSequence(1, n);
    cout << endl; 
    return 0;
}
