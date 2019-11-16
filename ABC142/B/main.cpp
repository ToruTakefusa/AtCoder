#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int height[n];

    int count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
        if (height[i] >= k )
            ++count;
    }

    cout << count << endl;

    return 0;
}
