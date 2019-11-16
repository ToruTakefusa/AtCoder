#include <iostream>
using namespace std;

int main() {
    int a[] = {64, 32, 16, 8, 4, 2};
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 0; i < 6; ++i) {
        if (n >= a[i]) {
            cout << a[i] << endl;
            break;
        }
    }
    return 0;
}
