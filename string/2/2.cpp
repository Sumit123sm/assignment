#include <iostream>
#include <string>
#include <climits> 
using namespace std;

char findSecondLargestDigit(string& str) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (char ch : str) {
        int digit = ch - '0'; 

        if (digit > largest) {
            secondLargest = largest;
            largest = digit;
        } else if (digit > secondLargest && digit < largest) {
            secondLargest = digit;
        }
    }

    return (secondLargest == INT_MIN) ? '0' : secondLargest + '0'; // Convert back to character
}

int main() {
    string str;
    
    cout << "Enter the string: ";
    cin >> str;
    
    char secondLargest = findSecondLargestDigit(str);
    
    cout << "Output: " << secondLargest << endl;
    
    return 0;
}
