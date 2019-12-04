#include <iostream>
#include <vector>

using namespace std;

int drow[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dcol[] = {-1, 0, 1, -1, 1, -1, 0, 1};
vector<vector<int>> island;
vector<vector<int>> c;

void dfs(int row, int col, int h, int w, int id) {
    island[row][col] = id;
    for (size_t i  = 0; i < 8; ++i) {
        int next_row = row + drow[i];
        int next_col = col + dcol[i];
        if ((next_row > -1) && (next_row < h) && (next_col > -1) && (next_col < w)
                && (c[next_row][next_col] == 1) && (island[next_row][next_col]) != id) {
            dfs(next_row, next_col, h, w, id);
        }
    }
}

int main () {
    int w, h;
    cin >> w >> h;
    if ((w == 0) || (h == 0)) {
        cout << 0 << endl;
        return 0;
    }

    c.assign(h, vector<int>(w, 0));
    for (size_t i = 0; i < h; ++i) {
        for (size_t j = 0; j < w; ++j) {
            cin >> c[i][j];
        }
    }

    island.assign(h, vector<int>(w, -1));

    int answer = 0;
    for (size_t i = 0; i < h; ++i) {
        for (size_t j = 0; j < w; ++j) {
            if (c[i][j] == 1 && island[i][j] == -1) {
                dfs(i, j, h, w, answer);
                ++answer;
            }
        }
    }

    cout << answer << endl;
}
