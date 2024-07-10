#include <iostream>
#include <vector>
#include <set>
using namespace std;
int minOperationsToSort(vector<int>& arr) {
    set<int> unique_elements(arr.begin(), arr.end());
    return unique_elements.size();
}

int main() {
   vector<int> arr = {4, 1, 3, 2, 2, 4, 4};
    cout << "Minimum operations required: " << minOperationsToSort(arr) << endl;
    return 0;
}
