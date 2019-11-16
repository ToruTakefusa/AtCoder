#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double num;
    if (n % 2 != 0) {
        // 奇数が入力された場合、N以下の奇数は (N + 1) / 2
        num = (n + 1) / 2;
    } else {
        // 偶数が入力された場合、N以下の奇数は N / 2
        num = n / 2;
    }
    double ans = num / n;
    cout << ans << endl;
    return 0;
}
