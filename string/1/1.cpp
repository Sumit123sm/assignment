#include <iostream>
#include <string>
using namespace std;

string updateOddPositions(string str) {

    for (size_t i = 1; i < str.length(); i += 2) {
        str[i] = '#';
    }
    return str;
}

int main() {
    string str;
    
    cout << "Enter the string: ";
    cin >> str;
    
    string updatedStr = updateOddPositions(str);
    
    cout << "Updated string: " << updatedStr << endl;
    
    return 0;
}
