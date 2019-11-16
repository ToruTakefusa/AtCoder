#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int size = n * 3;
    int a[size];

    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }
    sort(a, a + size, greater<long long int>());

    vector<long long int> vec;
    for (long long int i = 0; i < n; ++i) {
        vec.push_back(a[n - 1 + i]);
    }

    long long int sum = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        sum += vec[i];
    }
    cout << sum << endl;
    return 0;
}
