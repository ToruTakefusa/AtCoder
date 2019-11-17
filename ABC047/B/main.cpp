#include <iostream>

using namespace std;

int main()
{
    int w, h, n;
    cin >> w >> h >> n;
    int x[n];
    int y[n];
    int a[n];

    for (size_t i = 0; i < static_cast<size_t>(n); ++i) {
        cin >> x[i] >> y[i] >> a[i];
    }

    int dot[w][h];
    for (size_t i = 0; i < static_cast<size_t>(w); ++i) {
        for (size_t j = 0; j < static_cast<size_t>(h); ++j) {
            dot[i][j] = 0;
        }
    }

    for (size_t i = 0; i < static_cast<size_t>(n); ++i) {
        if (a[i] == 1) {
            for (size_t j = 0; j < static_cast<size_t>(x[i]); ++j) {
                for (size_t k = 0; k < static_cast<size_t>(h); ++k) {
                    dot[j][k] = -1;
                }
            }
        } else if (a[i] == 2) {
            for (size_t j = static_cast<size_t>(x[i]); j < static_cast<size_t>(w); ++j) {
                for (size_t k = 0; k < static_cast<size_t>(h); ++k) {
                    dot[j][k] = -1;
                }
            }
        } else if (a[i] == 3) {
            for (size_t j = 0; j < static_cast<size_t>(w); ++j) {
                for (size_t k = 0; k < static_cast<size_t>(y[i]); ++k) {
                    dot[j][k] = -1;
                }
            }
        } else if (a[i] == 4) {
            for (size_t j = 0; j < static_cast<size_t>(w); ++j) {
                for (size_t k = static_cast<size_t>(y[i]); k < static_cast<size_t>(h); ++k) {
                    dot[j][k] = -1;
                }
            }
        }
    }

    //count dot
    int count = 0;
    for (size_t i = 0; i < static_cast<size_t>(w); ++i) {
        for (size_t j = 0; j < static_cast<size_t>(h); ++j) {
            if (dot[i][j] == 0) {
                ++count;
            }
        }
    }

    cout << count << endl;
    return 0;
}
