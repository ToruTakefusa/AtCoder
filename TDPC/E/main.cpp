#include <iostream>

using namespace std;

int main() {
    int D;
    string N;
    cin >> D >> N;
    long long dp[N.length() + 1][D][2];
    memset(dp, 0, sizeof (dp));
    dp[0][0][0] = 1;

    for (size_t i = 0; i < N.length(); ++i) {
        int digit = N[i] - '0';
        for (size_t j = 0; j < D; ++j) {
            for (size_t k = 0; k < 2; ++k) {
                int end = digit;
                if (k == 1) end = 9;
                for (size_t l = 0; l <= end; ++l) {
                    int tmp = 0;
                    if ((k == 1) || (l < digit)) tmp = 1;
                    dp[i + 1][(j + l) % D][tmp] += dp[i][j][k];
                    dp[i + 1][(j + l) % D][tmp] %= 1000000007;
                }
            }
        }
    }

    cout << (dp[N.length()][0][0] + dp[N.length()][0][1] - 1) << endl;
}
