#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int power = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        power = power * i;
        int divide = pow(10, 9) + 7;
        power = power % divide;
    }
    cout << power << endl;
}
