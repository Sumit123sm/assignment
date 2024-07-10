#include <iostream>
#include <string>
#include <algorithm> // For std::reverse
using namespace std;

string reverseSecondHalf(const string& str) {
    int n = str.length();
    int mid = n / 2;
   
    string firstHalf = str.substr(0, mid);
    string secondHalf = str.substr(mid);
   
    reverse(secondHalf.begin(), secondHalf.end());

    return firstHalf + secondHalf;
}

int main() {
    string str;
    
    cout << "Enter the string: ";
    cin >> str;
    
    if (str.length() % 2 != 0) {
        cout << "The string length should be even." << endl;
        return 1; // Exit with error code
    }
    
    string result = reverseSecondHalf(str);
    
    cout << "Output: " << result << endl;
    
    return 0;
}
