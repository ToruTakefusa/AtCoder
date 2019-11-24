#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> counter;
    int n;
    cin >> n;

    int tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (counter.count(tmp) > 0) {
            counter.at(tmp) = counter.at(tmp) + 1;
        } else {
            counter.insert(make_pair(tmp, 1));
        }
    }

    int count = 0;
    for (map<int, int>::iterator itr = counter.begin(); itr != counter.end(); ++itr) {
        if (itr->second % 2 != 0) {
            ++count;
        }
    }
    cout << count << endl;
}
