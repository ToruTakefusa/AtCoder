#include <iostream>
#include <vector>

using namespace std;

bool found = false;
vector<vector<bool>> seen;

void dfs(string graph[], int row, int col, int h, int w) {
    seen[row][col] = true;

    if (graph[row][col] == '#') return;
    if (graph[row][col] == 'g') {
        found = true;
        return;
    }
    //cout << "row is " << row << ", col is " << col << endl;
    if ((row - 1 >= 0) && (!seen[row - 1][col]))
        dfs(graph, row - 1, col, h, w);
    if ((row + 1 < h) && (!seen[row + 1][col]))
        dfs(graph, row + 1, col, h, w);
    if ((col - 1 >= 0) && (!seen[row][col - 1]))
        dfs(graph, row, col - 1, h, w);
    if ((col + 1 < w) && (!seen[row][col + 1]))
        dfs(graph, row, col + 1, h, w);
}

int main () {
    int h, w;
    cin >> h >> w;
    string graph[h];
    int start_row = 0;
    int start_col = 0;

    for (size_t i = 0; i < h; ++i) {
        cin >> graph[i];
        for (size_t j = 0; j < w; ++j) {
            if (graph[i][j] == 's') {
                start_row = i;
                start_col = j;
            }
        }
    }

    seen.assign(h, vector<bool>(w, false));
    dfs(graph, start_row, start_col, h, w);
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
