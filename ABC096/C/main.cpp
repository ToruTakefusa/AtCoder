#include <iostream>

using namespace std;

bool IsWithin(int i, int j, int max_i, int max_j);

int main () {
    int h, w;
    cin >> h >> w;
    string paint[h];


    for (int i = 0; i < h; ++i) {
        cin >> paint[i];
    }

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            bool has_neighbor = false;
            if (paint[i][j] != '#')
                continue;
            // check (i-1,j)
            if (IsWithin(i - 1, j, h, w) && paint[i - 1][j] == '#')
                has_neighbor = true;
            // check (i, j-1)
            if (IsWithin(i, j - 1, h, w) && paint[i][j - 1] == '#')
                has_neighbor = true;
            // check (i, j+1)
            if (IsWithin(i, j + 1, h, w) && paint[i][j + 1] == '#')
                has_neighbor = true;
            // check (i+1, j)
            if (IsWithin(i + 1, j, h, w) && paint[i + 1][j] == '#')
                has_neighbor = true;
            if (!has_neighbor) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

}

bool IsWithin(int i, int j, int max_i, int max_j) {
    if ((i >= 0) && (i < max_i) && (j >= 0) && (j < max_j))
        return true;
    return false;
}
