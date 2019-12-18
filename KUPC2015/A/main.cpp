#include <iostream>

using namespace std;

const int MAX = 1000;
int solve(string s) {
    pair<int, int> position[MAX];

    int pos = 0;
    int i = 0;
    while(true) {
        if (string::npos == s.find("tokyo", pos)) break;
        int start = s.find("tokyo", pos);
        position[i] = make_pair(start + 5, start);
        pos += 5;
        ++i;
    }

    pos = 0;
    while(true) {
        if (string::npos == s.find("kyoto", pos)) break;
        int start = s.find("kyoto", pos);
        position[i] = make_pair(start + 5, start);
        pos += 5;
        ++i;
    }

    sort(position, position + i);

    int count = 0;
    int start = 0;
    for (int j = 0; j < i; ++j) {
        if (start <= position[j].second) {
            ++count;
            start = position[j].first;
        }
    }
    return count;
}

int main() {
    string s[MAX];
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string tmp;
        cin >> tmp;
        s[i] = tmp;
    }

    for (int i = 0; i < t; ++i) {
        cout << solve(s[i]) << endl;
    }
}
