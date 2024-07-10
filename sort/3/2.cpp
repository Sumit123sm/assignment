#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSorted(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

int findKForSortedArray(vector<int>& arr) {
    if (arr.size() < 2) return arr.empty() ? -1 : arr[0];  

    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    
    int K1 = sortedArr[0];
    vector<int> transformed1(arr.size());
    for (size_t i = 0; i < arr.size(); ++i) {
        transformed1[i] = abs(arr[i] - K1);
    }
    if (isSorted(transformed1)) return K1;

    
    int K2 = sortedArr[sortedArr.size() - 1];
    vector<int> transformed2(arr.size());
    for (size_t i = 0; i < arr.size(); ++i) {
        transformed2[i] = abs(arr[i] - K2);
    }
    if (isSorted(transformed2)) return K2;

    
    return -1;
}

int main() {
    vector<int> arr = {1, 5, 9};  
    int result = findKForSortedArray(arr);
    cout << "Result: " << result << endl;
    return 0;
}
