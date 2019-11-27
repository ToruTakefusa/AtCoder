#include <iostream>
#include <list>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    list<int> remainder;
    for (int i = 1; i <= b; ++i) {
        int tmp = (a * i) % b;
        remainder.push_back(tmp);
    }

    for (list<int>::iterator itr = remainder.begin(); itr != remainder.end(); ++itr) {
        if (*itr == c) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}
