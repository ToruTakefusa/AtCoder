#include <iostream>

using namespace std;

int main() {
    int dp[55][10010][55];
    int W;
    cin >> W;
    int N, K;
    cin >> N >> K;
    int a[N], b[N];

    for (int i = 0; i < N; ++i) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= W; ++j) {
            for (int k = 0; k <= K; ++k) {
                if ((j - a[i]) >= 0 && (k > 0)) {
                    dp[i + 1][j][k] = max(dp[i][j][k], dp[i][j - a[i]][k - 1] + b[i]);
                } else {
                    dp[i + 1][j][k] = dp[i][j][k];
                }
            }
        }
    }

    cout << dp[N][W][K] << endl;
}
