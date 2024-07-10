#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestCommonSubstring(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    int maxLength = 0;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }

    return maxLength;
}

int main() {
    string s1 = "abcde";
    string s2 = "abfce";
    
    int result = longestCommonSubstring(s1, s2);
    cout << "Length of the longest common substring: " << result << endl;

    return 0;
}
