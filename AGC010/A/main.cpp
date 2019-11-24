#include <iostream>

using namespace std;

int main() {
    size_t n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i< n; ++i) {
        cin >> a[i];
    }

    int count = 0;
    for (size_t i = 0; i < n; ++i) {
        if (a[i] % 2 == 1) {
            ++count;
        }
    }

    if (count %2 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}
