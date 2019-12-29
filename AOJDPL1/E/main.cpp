#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int dp[s1.length() + 10] [s2.length() + 10];

    memset(dp, 0, sizeof(dp));
    for (size_t i = 0; i <= s1.length(); ++i) {
        for (size_t j = 0; j <= s2.length(); ++j) {
            if (s1[i + 1] == s2[j + 1]) {
                dp[i + 1][j + 1] = dp[i][j];
            } else {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            }
        }
    }

    cout << dp[s1.length()][s2.length()] << endl;
}
