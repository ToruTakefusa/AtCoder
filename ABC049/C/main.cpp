#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    string phrase[] = {"dream", "dreamer", "erase", "eraser"};
    reverse(s.begin(), s.end());
    for (size_t i = 0; i < phrase->length(); ++i) {
        reverse(phrase[i].begin(), phrase[i].end());
    }

    for(size_t i = 0; i < s.size();) {
        bool contains = false;
        for (size_t j = 0; j < phrase->length(); ++j) {
            if (s.substr(i, phrase[j].length()) == phrase[j]) {
                contains = true;
                i += phrase[j].length();
            }
        }
        if (!contains) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
