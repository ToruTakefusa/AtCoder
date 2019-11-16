#include <iostream>
using namespace std;

bool isPalindromic(string s);

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (isPalindromic(to_string(i))) {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}

bool isPalindromic(string s) {
    for (int i = 0; i <= s.length() / 2; ++i) {
        if (s[i] != s[s.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}
