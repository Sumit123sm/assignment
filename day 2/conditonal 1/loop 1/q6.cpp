#include <iostream>

using namespace std;

int main() {
    char ch = 'a';  // Starting with 'a'

    cout << "ASCII values and their equivalent characters of 26 alphabets:" << endl;

    while (ch <= 'z') {
        cout << "ASCII value of '" << ch << "' : " << int(ch) << endl;
        ch++;  // Move to the next character
    }

    return 0;
}
