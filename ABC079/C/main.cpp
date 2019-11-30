#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n = 3;
    string t;
    int a, b, c, d;
    cin >> t;
    a = stoi(t.substr(0, 1));
    b = stoi(t.substr(1, 1));
    c = stoi(t.substr(2, 1));
    d = stoi(t.substr(3, 1));

    for (int bit = 0; bit < (1 << n); ++bit) {
        int sum = 0;
        queue<string> que;
        if (bit & (1 << 0)) {
            sum += a + b;
            que.push("+");
        } else {
            sum += a - b;
            que.push("-");
        }

        if (bit & (1 << 1)) {
            sum += c;
            que.push("+");
        } else {
            sum -= c;
            que.push("-");
        }

        if (bit & (1 << 2)) {
            sum += d;
            que.push("+");
        } else {
            sum -= d;
            que.push("-");
        }

        if (sum == 7) {
            string s = to_string(a) + que.front();
            que.pop();
            s += to_string(b) + que.front();
            que.pop();
            s += to_string(c) + que.front() + to_string(d) + "=" + to_string(sum);
            cout << s << endl;
            return 0;
        }
    }
}
