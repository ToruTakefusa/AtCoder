#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int DeleteCount(map<int,int> counter, int kind);

int main()
{
    int n, k;
    cin >> n >> k;

    map<int, int> counter;
    int tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (counter.count(tmp) > 0) {
            counter[tmp] += 1;
        } else {
            counter[tmp] = 1;
        }
    }

    int delete_kind = static_cast<int>(counter.size()) - k;
    if (delete_kind <= 0) {
        cout << 0 << endl;
        return 0;
    }

    priority_queue<int, vector<int>, greater<int>> queue;
    for (map<int, int>::iterator itr = counter.begin(); itr != counter.end(); ++itr) {
        queue.push(itr->second);
    }

    int delete_count = 0;
    for (int i = 0; i < delete_kind; ++i) {
        delete_count += queue.top();
        queue.pop();
    }

    cout << delete_count << endl;
    return 0;
}
