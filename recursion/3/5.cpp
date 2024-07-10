#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& current, int start) {

    result.push_back(current);

    for (int i = start; i < nums.size(); ++i) {
   
        if (i > start && nums[i] == nums[i - 1]) continue;

        current.push_back(nums[i]);

        backtrack(nums, result, current, i + 1);

        current.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    sort(nums.begin(), nums.end());

    backtrack(nums, result, current, 0);

    return result;
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = subsetsWithDup(nums);

    for (const auto& subset : result) {
        cout << "[";
        for (const auto& num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
