#include <iostream>
using namespace std;

int SumDigits(int n);

int main() {
    int n;
    cin >> n;
    int tmpSum = 0;
    int minSum = 1000;
    for (int i = 1; i <= n / 2; ++i) {
        tmpSum = SumDigits(i) + SumDigits(n - i);
        if (tmpSum < minSum) {
            minSum = tmpSum;
        }
    }

    cout << minSum << endl;
    return 0;
}

int SumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
