#include <iostream>
#include <vector>
#include <queue>
#include <numeric>
using namespace std;

int main() {
    size_t n;
    cin >> n;
    vector<int> vec(n);
    for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
        cin >> *itr;
    }

    sort(vec.begin(), vec.end(), greater<int>());
    int a = 0;
    int b = 0;

    for (size_t i = 0; i < vec.size(); ++i) {
        if (i % 2 == 0) {
            a += vec[i];
        } else {
            b += vec[i];
        }
    }

    cout << a - b << endl;
    return 0;
}
