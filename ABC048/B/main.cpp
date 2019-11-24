#include <iostream>

using namespace std;

long long int f(long long int n, long long int x);

int main() {
    long long int a, b, x;
    cin >> a >> b >> x;
    cout << (f(b, x) - f(a - 1, x)) << endl;
}

long long int f(long long int n, long long int x) {
    if (x == -1)
        return 0;
    return (n / x + 1);
}
