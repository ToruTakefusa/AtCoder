#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h, "");

    string tmp;
    for (size_t i = 0; i < h; ++i) {
        cin >> tmp;
        s[i] = tmp;
    }

    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    vector<vector<int>> d(h, vector<int>(w, -1));

    pair<int, int> tmp_q;
    int count = 0;
    while(!q.empty() || count <= 2500) {
        tmp_q = q.front();
        q.pop();
        if ((tmp_q.first == h - 1) && (tmp_q.second == w - 1)) {
            break;
        }

        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, -1, 0, 1};
        for (size_t i = 0; i < 4; ++i) {
            int nx = tmp_q.first + dx[i];
            int ny = tmp_q.second + dy[i];
            if ((nx > -1) && (nx < h) && (ny > -1) && (ny < w) && (s[nx][ny] != '#') && (d[nx][ny] == -1)) {
                q.push(make_pair(nx, ny));
                d[nx][ny] = d[tmp_q.first][tmp_q.second] + 1;
            }
        }
    }

    if(count >= 2500) {
        cout << -1 << endl;
    } else {
        int score = 0;
        for (size_t i = 0; i < h; ++i) {
            for (size_t j = 0; j < w; ++j) {
                if (s[i][j] != '#') {
                    ++score;
                }
            }
        }
        score = score - d[h - 1][w - 1] - 2;
        cout << score << endl;
    }
}
