#include <iostream>

using namespace std;

const int MAX = 100001;

int solve(pair<int, int> proposal[MAX], int m) {
    int start = 0;
    int count = 0;
    for (int i = 0; i < m; ++i) {
        if (start <= proposal[i].second) {
            ++count;
            start = proposal[i].first;
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    pair<int, int> proposal[MAX];
    for (int i = 0; i < m; ++i) {
        int a,b;
        cin >> a >> b;
        proposal[i] = make_pair(b, a);
    }

    sort(proposal, proposal + m);

    cout << solve(proposal, m) << endl;
}
