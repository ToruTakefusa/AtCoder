#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int notCoverd = a - 2 * b;
    if (notCoverd > 0) {
        cout << notCoverd << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
