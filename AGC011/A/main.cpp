#include <iostream>
#include <algorithm>

using namespace std;

size_t GetCountWithinK(int t[], int k, int start_index, int size);

int main() {
    size_t n;
    int c, k;
    cin >> n >> c >> k;

    int t[n];
    for (size_t i = 0; i < n; ++i) {
        cin >> t[i];
    }
    sort(t, t+n);

    int count = 0;
    for (size_t i = 0; i < n;) {
        i += GetCountWithinK(t, k, i, c);
        ++count;
    }

    cout << count << endl;
    return 0;

}

size_t GetCountWithinK(int t[], int k, int start_index, int size) {
    size_t count = 1;
    int within = t[start_index] + k;
    for (size_t i = start_index + 1; i < sizeof (t); ++i) {
        if (t[i] <= within && count < size) {
            ++count;
        } else {
            break;
        }
    }

    return count;
}
