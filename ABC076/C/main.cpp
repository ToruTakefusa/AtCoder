#include <iostream>

using namespace std;

int main() {
    string s_dash, t;
    cin >> s_dash >> t;

    if (s_dash.length() < t.length()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    size_t start_index = 0;
    size_t end_index = 0;

    bool found = false;
    for (size_t i = 0; i < s_dash.length(); ++i) {
        for (size_t j = 0; j < t.length(); ++j) {
            if ((s_dash[i + j] != t[j]) && (s_dash[i + j] != '?')) {
                break;
            }
            if (j == t.length() - 1) {
                start_index = i;
                end_index = i + j;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if ((start_index == 0) &&(end_index == 0)) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    for (size_t i = 0; i < s_dash.length(); ++i) {
        if ((i >= start_index) && (i <= end_index)) {
            s_dash[i] = t[i - start_index];
        }
        if (s_dash[i] == '?') s_dash[i] = 'a';
    }

    cout << s_dash << endl;
}
