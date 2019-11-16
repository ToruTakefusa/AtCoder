#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string t;
    for (size_t i = 0; i < s.size(); i = i + 2) {
        t = t + s[i];
    }

    cout << t << endl;
    return 0;
}
