#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int sum = 0;
    if (2*c > (a+b)) {
        sum = a * x + b * y;
    } else {
        int min_xy = min(x, y) * 2;
        int max_xy = max(x, y) * 2;
        int min_sum = a * (x - min(x, y)) + b * (y - min(x, y)) + c * min_xy;
        int max_sum = a * max(0, x - max(x, y)) + b * max(0, y - max(x, y)) + c * max_xy;
        sum = min(min_sum, max_sum);
    }

    cout << sum << endl;
    return 0;
}
