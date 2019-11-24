#include <iostream>

using namespace std;

int main() {
    size_t n;
    cin >> n;
    int t[n + 1], x[n + 1], y[n + 1];
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (size_t i = 0; i < n; ++i) {
        cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
    }

    bool able = true;
    for (size_t i = 0; i < n; ++i) {
        int dt = t[i + 1] - t[i];
        int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
        if (dt < dist)
            able = false;
        if ((dt % 2) != (dist % 2))
            able = false;
    }

    if (able) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


}
