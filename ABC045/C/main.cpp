#include <iostream>
#include <cmath>

using namespace std;

long long calc(string s);

int main() {
    string s;
    cin >> s;
    string foo = s.substr(2 ,0);
    cout << calc(s) << endl;
}

long long calc(string s) {
    long long ret = 0;
    long long tmp;
    long len = s.length();
    for (int i = 1; i <= len; ++i) {
        if (i == s.length()) {
            tmp = stoll(s);
            ret += tmp;
        } else {
            long long tmp = stoll(s.substr(0, i)) * pow(2, (len - i - 1)) + calc(s.substr(i, len - i));
            ret += tmp;
        }
    }
    return ret;
}
