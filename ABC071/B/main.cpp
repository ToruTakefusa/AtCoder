#include <iostream>
#include <set>
using namespace std;

string MissingChar(set<char> count);

int main()
{
    string s;
    cin >> s;
    set<char> count;
    for (size_t i = 0; i < s.length(); ++i) {
        count.insert(s[i]);
    }

    cout << MissingChar(count) << endl;
    return 0;
}

string MissingChar(set<char> count) {
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (size_t i = 0; i < alpha.length(); ++i) {
        if (!count.count(alpha[i])) {
            return {alpha[i]};
        }
    }
    return "None";
}
