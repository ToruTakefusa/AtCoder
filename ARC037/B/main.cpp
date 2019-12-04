#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;

vector<bool> seen;
bool flag;

void dfs(vector<vector<int>> graph, int v, int previous) {
    for (size_t i = 0; i < graph[v].size(); ++i) {
        int next_v = graph[v][i];
        if (seen[next_v]) {
            flag = false;
            return;
        } else {
            seen[next_v] = true;
            dfs(graph, next_v, v);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    if ((n == 0) || (m == 0)) {
        cout << 0 << endl;
        return 0;
    }

    graph = vector<vector<int>>(static_cast<size_t>(n + 1));

    int a, b;
    for (size_t i = 0; i < static_cast<size_t>(m); ++i) {
        cin >> a >> b;
        graph[a].push_back(b);
    }

    seen.assign(n + 1, false);
    int ans = 0;
    for (size_t i = 1; i <= n; ++i) {
        if (seen[i] == false) {
            flag = true;
            dfs(graph, i, -1);
            if (flag) ans++;
        }
    }

    cout << ans << endl;

}
