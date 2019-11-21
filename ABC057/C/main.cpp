#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

int main()
{
    long n;
    cin >> n;
    long b;
    queue<long> que;
    for (long i = 1; i <= sqrt(n); ++i) {
        if ((n % i) == 0) {
            b = n / i;
            que.push(i);
            que.push(b);
        }
    }
    size_t length_a;
    size_t length_b;
    size_t f;
    size_t min_f = 1000000;
    size_t count = que.size() / 2;
    for (size_t i = 0; i < count; ++i) {
        length_a = to_string(que.front()).length();
        que.pop();
        length_b = to_string(que.front()).length();
        que.pop();
        f = max(length_b, length_a);
        if (f < min_f) {
            min_f = f;
        }
    }

    cout << min_f << endl;
    return 0;
}
