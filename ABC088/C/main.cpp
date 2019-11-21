#include <iostream>

using namespace std;

int main()
{
    int c[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> c[i][j];
        }
    }

    int b[3];
    for (int i = 0; i < 3; ++i) {
        b[i] = c[0][i];
    }

    bool is_same = (c[1][0] - b[0]) == (c[1][1] - b[1]);
         is_same = is_same && ((c[1][1] - b[1]) == (c[1][2] - b[2]));
         is_same = is_same && ((c[2][0] - b[0]) == (c[2][1] - b[1]));
         is_same = is_same && ((c[2][0] - b[0]) == (c[2][2] - b[2]));

    if (is_same) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
