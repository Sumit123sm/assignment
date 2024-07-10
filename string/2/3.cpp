#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); 
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}


int countVowelSubstrings(string& str) {
    int count = 0;
    int currentLength = 0;

    for (char ch : str) {
        if (isVowel(ch)) {
            currentLength++;
        } else {
            if (currentLength > 0) {
                count += currentLength * (currentLength + 1) / 2;
                currentLength = 0;
            }
        }
    }

    // If the last segment was a vowel segment
    if (currentLength > 0) {
        count += currentLength * (currentLength + 1) / 2;
    }

    return count;
}

int main() {
    string str;
    
    cout << "Enter the string: ";
    cin >> str;
    
    int result = countVowelSubstrings(str);
    
    cout << "Output: " << result << endl;
    
    return 0;
}
