#include <iostream>

using namespace std;

int GetXCount(int a[], size_t n, int x);

int main() {
    size_t n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max = 0;
    int count = 0;
    for (size_t i = 0; i < n; ++i) {
        int x = a[i] - 1;
        count = GetXCount(a, n, x);
        if (count > max)
            max = count;

        x = a[i];
        count = GetXCount(a, n, x);
        if (count > max)
            max = count;

        x = a[i] - 1;
        count = GetXCount(a, n, x);
        if (count > max)
            max = count;
    }

    cout << max << endl;
}

int GetXCount(int a[], size_t n, int x) {
    if (x < 0)
        return 0;
    int count = 0;
    for (size_t j = 0; j < n; ++j) {
        if ((a[j] == x) || (abs(a[j] - x) == 1 )) {
                ++count;
        }
    }
    return count;
}
