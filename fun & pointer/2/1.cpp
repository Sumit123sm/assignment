#include <iostream>
using namespace std;

void findProduct(int* a, int* b, int* product) {
    *product = (*a) * (*b);
}

int main() {
    int num1, num2, product;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    findProduct(&num1, &num2, &product);
    
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    
    return 0;
}
