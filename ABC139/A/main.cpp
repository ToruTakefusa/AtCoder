#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int count = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (t[i] == s[i]) {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}
