#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool exists = false;

    for (int i = 0; i < 100 ; ++i) {
        for (int j = 0; j < 100; ++j) {
            if ( i * 4 + 7 * j == n) {
                exists = true;
                goto exit_for;
            }
        }
    }
    exit_for:
    if (exists) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
