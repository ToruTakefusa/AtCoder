#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max_value;
    max_value = max(a, b);
    max_value = max(max_value, c);
    int sum = (a + b + c);
    if ((3 * max_value % 2) !=  (sum % 2)) {
        max_value += 1;
    }

    cout << (3 * max_value - sum) / 2 << endl;
}
