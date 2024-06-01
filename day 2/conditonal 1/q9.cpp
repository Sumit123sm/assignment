#include <iostream>

using namespace std;

int main() {
    char ch;

    // Input a character
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is an alphabet." << endl;
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    }
    // Otherwise, it's a special character
    else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
