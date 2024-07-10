#include <iostream>
#include <string>
using namespace std;

int stringToInteger(const string& str) {
    int result = 0;
    
    for (char ch : str) {
       
        int digit = ch - '0';
       
        result = result * 10 + digit;
    }
    
    return result;
}

int main() {
    string str;
    
    cout << "Enter the string: ";
    cin >> str;
    
    if (str.length() >= 10) {
        cout << "The string length should be less than 10." << endl;
        return 1; // Exit with error code
    }
    
    int number = stringToInteger(str);
    
    cout << "Output: " << number << endl;
    
    return 0;
}
