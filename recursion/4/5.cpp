#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";
    
    vector<int> binaryDigits;
    
    // Convert decimal to binary
    while (n > 0) {
        binaryDigits.push_back(n % 2);
        n /= 2;
    }
    
    // Construct binary string from the binary digits vector
    string binaryString;
    for (int i = binaryDigits.size() - 1; i >= 0; --i) {
        binaryString += to_string(binaryDigits[i]);
    }
    
    return binaryString;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Binary representation: " << decimalToBinary(decimalNumber) << endl;

    return 0;
}



// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     int decimalNumber;
//     cout << "Enter a decimal number: ";
//     cin >> decimalNumber;
    
//     // Use bitset to convert decimal to binary
//     bitset<32> binary(decimalNumber); // Change 32 to the desired number of bits
//     cout << "Binary representation: " << binary << endl;

//     return 0;
// }
