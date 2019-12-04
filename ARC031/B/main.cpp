#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> seen;
bool found = false;

void dfs(string graph[], int row, int col) {
    seen[row][col] = true;
    if (graph[row][col] == 'x') {
        if ((row - 1 >= 0) && (row + 1 < 10) && (graph[row - 1][col] == 'o') && (graph[row + 1][col] == 'o')) {
            found = true;
            return;
        }
        if ((col - 1 >= 0) && (col + 1 < 10) && (graph[row][col - 1] == 'o') && (graph[row][col + 1] == 'o')) {
            found = true;
            return;
        }
    }
    if ((row - 1 >= 0) && (!seen[row - 1][col]))
        dfs(graph, row - 1, col);
    if ((row + 1 < 10) && (!seen[row + 1][col]))
        dfs(graph, row + 1, col);
    if ((col - 1 >= 0) && (!seen[row][col - 1]))
        dfs(graph, row, col - 1);
    if ((col + 1 < 10) && (!seen[row][col + 1]))
        dfs(graph, row, col + 1);
}

int main() {
    string graph[10];
    for (size_t i = 0; i < 10; ++i) {
        cin >> graph[i];
    }
    seen.assign(10, vector<bool>(10, false));
    dfs(graph, 0, 0);
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
