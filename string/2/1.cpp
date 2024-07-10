#include <iostream>
#include<climits>
#include<algorithm>
#include <string>
using namespace std;

string concatenateWithReverse(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    
   
    return str + reversedStr;
}

int main() {
    string str;
    
    cout << "Enter the string: ";
    cin >> str;
    
    string result = concatenateWithReverse(str);
    
    cout << "Output: " << result << endl;
    
    return 0;
}
