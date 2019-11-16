#include <iostream>
#include <numeric>
using namespace std;

int GetMaxPartialSum(int a[], size_t size, int x);
int main()
{
    size_t n;
    int x;
    cin >> n >> x;

    int a[n];
    for (size_t i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if (accumulate(a, a + n, 0) == n) {
        cout << n << endl;
    }
    sort(a, a + n);

    int child = GetMaxPartialSum(a, n, x);
    cout << child << endl;
    return 0;
}

int GetMaxPartialSum(int a[], size_t size, int x) {
    int sum = 0;
    for (size_t i = 0; i < size ; ++i) {
        sum += a[i];
        if (sum > x) {
            return i;
        }
    }
    return size;
}
