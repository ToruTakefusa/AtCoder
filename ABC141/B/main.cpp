#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool easyStep = true;
    for (int i = 0; i < s.length(); ++i) {
        if (i % 2 == 0) {
            if ((s[i] != 'R') && (s[i] != 'U') &&(s[i] != 'D')) {
                easyStep = false;
                break;
            }
        } else {
            if ((s[i] != 'L') && (s[i] != 'U') && (s[i] != 'D')) {
                easyStep = false;
                break;
            }
        }
    }
    if (easyStep) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
