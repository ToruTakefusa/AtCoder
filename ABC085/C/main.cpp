#include <iostream>

using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;

    int k = 0;
    int sum = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0 ; j <= n - i; ++j) {
            k = n - i -j;
            sum = 10000 * i + 5000 * j + 1000 * k;
            if (sum == y) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}
