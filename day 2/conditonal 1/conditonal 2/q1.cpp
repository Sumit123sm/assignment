#include <iostream>

using namespace std;

int main() {
    int amount;
    
    // Input the amount
    cout << "Enter the amount: ";
    cin >> amount;

    // Initialize variables to count the number of notes
    int notes500 = 0, notes200 = 0, notes100 = 0, notes10 = 0, notes5 = 0, notes2 = 0;

    // Calculate the minimum number of notes
    switch (amount) {
        case 500:
            notes500 = 1;
            break;
        case 200:
            notes200 = 1;
            break;
        case 100:
            notes100 = 1;
            break;
        case 10:
            notes10 = 1;
            break;
        case 5:
            notes5 = 1;
            break;
        case 2:
            notes2 = 1;
            break;
        default:
            // For amounts greater than 500, we will use a nested switch statement
            if (amount > 500) {
                notes500 = amount / 500;
                amount %= 500;
            }
            if (amount > 200) {
                notes200 = amount / 200;
                amount %= 200;
            }
            if (amount > 100) {
                notes100 = amount / 100;
                amount %= 100;
            }
            if (amount > 10) {
                notes10 = amount / 10;
                amount %= 10;
            }
            if (amount > 5) {
                notes5 = amount / 5;
                amount %= 5;
            }
            if (amount > 2) {
                notes2 = amount / 2;
                amount %= 2;
            }
            break;
    }

    // Output the result
    cout << "Notes of 500 = " << notes500 << endl;
    cout << "Notes of 200 = " << notes200 << endl;
    cout << "Notes of 100 = " << notes100 << endl;
    cout << "Notes of 10 = " << notes10 << endl;
    cout << "Notes of 5 = " << notes5 << endl;
    cout << "Notes of 2 = " << notes2 << endl;

    return 0;
}
