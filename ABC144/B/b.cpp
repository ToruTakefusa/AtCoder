#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int product;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            product = i * j;
            if (product == a) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}