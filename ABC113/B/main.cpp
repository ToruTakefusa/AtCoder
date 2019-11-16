#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    size_t n;
    int t, a;
    cin >> n >> t >> a;
    vector<int> height(n);
    vector<double> averageTemp(n);

    for (vector<int>::iterator itr = height.begin(); itr != height.end(); ++itr) {
        cin >> *itr;
    }

    for (size_t i = 0; i < n; ++i) {
        averageTemp[i] = abs(t - height[i] * 0.006 - a);
    }

    vector<double>::iterator min = min_element(averageTemp.begin(), averageTemp.end());
    size_t minIndex = distance(averageTemp.begin(), min);
    cout << (minIndex + 1) << endl;
    return 0;
}
