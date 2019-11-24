#include <iostream>

using namespace std;

bool HasOverlap(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (HasOverlap(a, b, c, d)) {
        int lower_bound = max(a, c);
        int upper_bound = min(b, d);
        cout << upper_bound - lower_bound << endl;
    } else {
        cout << 0 << endl;
    }
}

bool HasOverlap(int a, int b, int c, int d) {
    if ((a <= c) && (d <= b))
        return true;
    if ((c <= a) && (b <= d))
        return true;
    if ((a <= c) && (b <= d) && (c <= b))
        return true;
    if ((c <= a) && (d <= b) && (a <= d))
        return true;
    return false;
}
