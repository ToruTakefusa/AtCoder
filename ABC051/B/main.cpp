#include <iostream>

using namespace std;

int main() {
    int k, s;
    cin >> k >> s;

    int sum = 0;
    int count = 0;
    for (int i = 0; i <= k; ++i) {
        for (int j = 0; j <= k; ++j) {
            for (int l = 0; l <= k; l++) {
                sum = i + j + l;
                if (sum == s) {
                    ++count;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
