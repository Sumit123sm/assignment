#include <iostream>
#include <vector>

using namespace std;

int get(int index) {
     vector<int> infiniteArray = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    return (index < infiniteArray.size()) ? infiniteArray[index] : -1;
}

int searchInInfiniteArray(int target) {
    int low = 0;
    int high = 1;

    while (get(high) < target) {
        low = high;
        high = 2 * high;
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int midValue = get(mid);

        if (midValue == target) {
            return mid;  
        } else if (midValue < target) {
            low = mid + 1;  
        } else {
            high = mid - 1; 
        }
    }

    return -1;  
}

int main() {
    int target ;
    cin>>target; 
    int result = searchInInfiniteArray(target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }

    return 0;
}
