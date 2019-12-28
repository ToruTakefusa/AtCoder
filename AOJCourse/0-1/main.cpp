#include <iostream>

using namespace std;



int main() {
    int n, w;
    cin >> n >> w;

    int v[n], weight[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i] >> weight[i];
    }

    int dp[n + 10][w + 10];
    for (int i = 0; i <= w; ++i) {
        dp[0][i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= w; ++j) {
            if (j < weight[j]) {
                dp[i + 1][j] = dp[i][j];
            } else {
                dp[i + 1][j] = max(dp[i][j - weight[i]] + v[i], dp[i][j]);
            }
        }
    }

    cout << dp[n][w] << endl;
}
