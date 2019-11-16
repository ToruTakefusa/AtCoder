#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> counter;
    for (int i = 1; i < n; ++i) {
        counter[i] = 0;
    }

    int tmp;
    for (int i = 0; i < m * 2; ++i) {
        cin >> tmp;
        counter[tmp] += 1;
    }

    for (map<int, int>::iterator itr = counter.begin(); itr != counter.end(); ++itr) {
        cout << itr->second << endl;
    }
    return 0;
}
