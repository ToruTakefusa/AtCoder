#include <iostream>
#include <queue>

using namespace std;
int h, w, n;

int dfs(vector<string> graph, pair<int, int > goal, queue<pair<int, int >> q, vector<vector<int>> d) {
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, -1, 0, 1};
    while(!q.empty()) {
        pair<int, int> tmp = q.front();
        q.pop();
        if ((goal.first == tmp.first) && (goal.second == tmp.second)) {
            return d[goal.first][goal.second];
        }

        for (size_t i = 0; i < 4; ++i) {
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];

            if ((nx > -1) && (nx < h) && (ny > -1) && (ny < w) && (graph[nx][ny] != 'X') && (d[nx][ny] == -1)) {
                d[nx][ny] = d[tmp.first][tmp.second] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }

}

int main() {
    cin >> h >> w >> n;

    vector<string> graph(h, "");
    pair<int, int> start;
    vector<pair<int, int>> tmp_goals(n, make_pair(-1, -1));

    string tmp;
    for (size_t i = 0; i < h; ++i) {
        cin >> tmp;
        graph[i] = tmp;
        for(size_t j = 0; j < w; ++j) {
            if (graph[i][j] == 'S')
                start = make_pair(i, j);
            bool isCheese = (graph[i][j] == '1') || (graph[i][j] == '2') || (graph[i][j] == '3') || (graph[i][j] == '4') ||
                    (graph[i][j] == '5') || (graph[i][j] == '6') || (graph[i][j] == '7') || (graph[i][j] == '8') || (graph[i][j] == '9');
            if (isCheese) {
                int index = (int) (graph[i][j] - '1');
                tmp_goals[index] = make_pair(i, j);
            }
        }
    }

    queue<pair<int, int >> goals;
    for (vector<pair<int,int>>::iterator itr = tmp_goals.begin(); itr != tmp_goals.end(); ++itr) {
        goals.push(make_pair(itr->first, itr->second));
    }


    pair<int, int> previous;
    int previous_cost = 0;

    const int SIZE = goals.size();
    for (size_t i = 0; i < SIZE; ++i) {
        queue<pair<int, int>> q;
        vector<vector<int>> d(h, vector<int>(w, -1));
        if (i == 0) {
            q.push(start);
            d[start.first][start.second] = 0;
        } else {
            q.push(previous);
            d[previous.first][previous.second] = previous_cost;
        }
        previous_cost = dfs(graph, goals.front(), q, d);
        previous = goals.front();
        goals.pop();
    }
    cout << previous_cost << endl;
}
