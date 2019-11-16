#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];

    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    double maxLength = 0;
    double length = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            length = sqrt(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2));
            if (maxLength < length) {
                maxLength = length;
            }
        }
    }

    cout << maxLength << endl;
    return 0;
}
