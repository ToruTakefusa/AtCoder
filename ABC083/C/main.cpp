#include <iostream>
#include <queue>

using namespace std;

int main() {
    long long int x, y;
    cin >> x >> y;

    queue<long long int> que;
    long long int tmp = x;

    while(tmp <= y) {
        que.push(tmp);
        tmp = tmp * 2;
    }

    cout << que.size() << endl;
}
