#include <iostream>

using namespace std;

int sumDigits(int n);

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    int tmp = 0;
    for (int i = 1; i <= n; ++i ) {
        tmp = sumDigits(i);
        bool inRange = (a <= tmp && tmp <= b);
        if (inRange) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}

int sumDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
