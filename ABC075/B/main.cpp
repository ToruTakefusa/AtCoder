#include <iostream>
using namespace std;

bool IsBomb(string bomb, size_t j);
bool IsWithin(size_t i, size_t j, size_t h, size_t w);

int main() {
    size_t h, w;
    cin >> h >> w;
    string bomb[h];
    for (size_t i = 0; i < h; ++i) {
            cin >> bomb[i];
    }

    int count = 0;
    for (size_t i = 0; i < h; ++i) {
        for (size_t j = 0; j < w; ++j) {
            if (bomb[i][j] == '#') {
                continue;
            }
            // check (i-1, j-1)
            if (IsWithin(i - 1, j - 1, h, w)) {
                if (bomb[i-1][j-1] == '#')
                    ++count;
            }

            // check (i-1, j)
            if (IsWithin(i-1, j, h, w)) {
                if (IsBomb(bomb[i-1], j))
                    ++count;
            }

            // check (i-1, j+1)
            if (IsWithin(i-1, j + 1, h, w)) {
                if (IsBomb(bomb[i-1], j + 1))
                    ++count;
            }

            // check (i, j-1)
            if (IsWithin(i, j - 1, h, w)) {
                if (IsBomb(bomb[i], j - 1))
                    ++count;
            }

            // check (i, j+1)
            if (IsWithin(i, j + 1, h, w)) {
                if (IsBomb(bomb[i], j + 1))
                    ++count;
            }

            // check (i+1, j-1)
            if (IsWithin(i + 1, j - 1, h, w)) {
                if (IsBomb(bomb[i + 1], j - 1))
                    ++count;
            }

           // check (i+1, j)
            if (IsWithin(i + 1, j, h, w)) {
                if (IsBomb(bomb[i + 1], j))
                    ++count;
            }

            //check (i+1, j+1)
            if (IsWithin(i + 1, j + 1, h, w)) {
                if (IsBomb(bomb[i + 1], j + 1))
                    ++count;
            }
            bomb[i][j] = (char)('0' + count);
            count = 0;
        }
    }

    for (size_t i = 0; i < h; ++i){
        cout << bomb[i] << endl;
    }
}

bool IsWithin(size_t i, size_t j, size_t h, size_t w) {
    if ((i >= 0) && (i < h) && (j >= 0) && (j < w))
        return true;
    return false;
}

bool IsBomb(string bomb, size_t j) {
    if (bomb[j] == '#')
        return true;
    return false;
}
