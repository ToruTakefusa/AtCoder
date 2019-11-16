#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    size_t first = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == 'A') {
            first = i;
            break;
        }
    }

    int last = 0;
    for (int i = s.length(); i > -1; --i) {
        if (s[i] == 'Z') {
            last = i;
            break;
        }
    }

    cout << (last - first + 1) << endl;
    return 0;
}
