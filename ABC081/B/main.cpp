#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

   int count = 0;

    while (true) {
        bool even = true;
        for (int i = 0; i < n ; ++i) {
            if (a[i] % 2 != 0) {
                even = false;
            }
            a[i] = a[i] / 2;
        }
        if (!even)  break;
        ++count;
    }
    cout << count << endl;
    return 0;
}
