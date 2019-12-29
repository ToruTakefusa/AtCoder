#include <iostream>

using namespace std;

long long int getLCS(string x, string y) {
    int dp[1010][1010];
    memset(dp, 0, sizeof (dp));
    for (size_t i = 0; i <= x.length(); ++i) {
        for (size_t j = 0; j <= y.length(); ++j) {
            if (x[i] == y[j]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            } else {
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    return dp[x.length()][y.length()];
}

int main() {
    int q;
    cin >> q;

    string x[q], y[q];
    for (int i = 0; i < q; ++i) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < q; ++i) {
        cout << getLCS(x[i], y[i]) << endl;
    }
}
