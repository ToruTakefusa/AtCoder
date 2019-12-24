#include <iostream>
using namespace std;

int main() {
    int t, n, m;
    cin >> t >> n;
    int a[n];
    for (size_t i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
    }

    cin >> m;
    int b[m];
    for (size_t i = 0; i < m; ++i) {
        int tmp;
        cin >> tmp;
        b[i] = tmp;
    }

    bool no_tako = false;
    for (size_t i = 0; i < m ; ++i) {
        bool found = false;
        for (size_t j = 0; j < n; ++j) {
            if ((b[i] -  t <= a[j]) && (a[j] <= b[i]) && (a[j] != -1)) {
                a[j] = -1;
                found = true;
                break;
            }
            found = false;
        }
        if (!found) {
            no_tako = true;
        }
    }

    if (no_tako) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }
}
