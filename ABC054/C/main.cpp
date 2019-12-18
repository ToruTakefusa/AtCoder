#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solve (vector<vector<bool>> graph, vector<int> vertix, int n) {
    int count = 0;
    do {
        if (vertix[0] != 0) continue;

        bool correct = true;
        for (size_t i = 0; i < n - 1; ++i) {
            int from = vertix[i];
            int to = vertix[i + 1];
            if (!graph[from][to]) correct = false;
        }
        if(correct) ++count;
    }while(next_permutation(vertix.begin(), vertix.end()));
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<bool>> graph(static_cast<size_t>(n), vector<bool>(static_cast<size_t>(n), false));
    size_t a, b;
    for (size_t i = 0; i < static_cast<size_t>(m); ++i) {
        cin >> a >> b;
        --a;
        --b;
        graph[a][b] = true;
        graph[b][a] = true;
    }

    vector<int> vertix(static_cast<size_t>(n), 0);
    for (size_t i = 0; i < n; ++i) {
        vertix[i] = i;
    }

    cout << solve(graph, vertix, n) << endl;
}
