#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if ((0 > a) ||  (0 > b) || (9 < a) || (9 < b) ) {
        cout << -1 << endl;
        return 0;
    }
    cout << a * b << endl;
    return 0;
}