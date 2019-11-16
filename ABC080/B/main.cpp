#include <iostream>
using namespace std;

int sumDigits(int n);

int main() {
    int n;
    cin >> n;
    int sumDigit = sumDigits(n);
    if (n % sumDigit == 0) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
