#include <iostream>

using namespace std;

int main() {
    bool dp[110][1000];
    //memset(dp, 0, sizeof (dp));
    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 1000; ++j) {
            dp[i][j] = false;
        }
    }

    dp[0][0] = true;
    for (int i = 1; i < 1000; ++i) {
        dp[0][i] = false;
    }

    int n;
    cin >> n;
    int p[110];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < 1000; ++j) {
            if ((j - p[i]) >= 0) {
                dp[i + 1][j] = dp[i][j] || dp[i][j - p[i]];
            } else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    int count = 0;
    for (int i = 0; i < 1000; ++i) {
        if (dp[n][i]) ++count;
    }

    cout << count << endl;
}
