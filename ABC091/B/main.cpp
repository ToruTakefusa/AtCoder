#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    string tmp;

    map<string, int> counter;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (counter.count(tmp) > 0) {
            counter[tmp] += 1;
        } else {
            counter[tmp] = 1;
        }
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        if (counter.count(tmp) != 0) {
            counter[tmp] -= 1;
        } else {
            counter[tmp] = -1;
        }

    }

    int max = 0;
    for (map<string, int>::iterator itr = counter.begin(); itr != counter.end(); ++itr) {
        if (itr->second > max) {
            max = itr->second;
        }
    }

    cout << max << endl;
    return 0;
}
