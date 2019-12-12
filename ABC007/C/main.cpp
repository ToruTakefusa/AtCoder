#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    pair<int, int> s, g;
    int x, y;
    cin >> x >> y;
    s = make_pair(x - 1, y - 1);
    cin >> x >> y;
    g = make_pair(x - 1, y - 1);

    vector<vector<int>> d(r, vector<int>(c, -1));
    vector<string> graph(r, "");

    for (int i = 0; i < r; ++i) {
        string tmp;
        cin >> tmp;
        graph[i] = tmp;
    }

    queue<pair<int, int>> q;
    q.push(s);
    d[s.first][s.second] = 0;

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, -1, 0, 1};

    while(!q.empty()) {
        pair<int, int> tmp = q.front();
        q.pop();

        if ((tmp.first ==g.first) && (tmp.second == g.second)) {
            break;
        }

        for (int i = 0; i < 4; ++i) {
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];
            if ((nx > -1) && (nx < r) && (ny > -1) && (ny < c) && (graph[nx][ny] == '.') && (d[nx][ny] == -1)) {
                q.push(make_pair(nx, ny));
                d[nx][ny] = d[tmp.first][tmp.second] + 1;
            }
        }
    }
    cout << d[g.first][g.second] << endl;
}
