#include <iostream>
#include <queue>
#include <math.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    int mul;
    queue<long long int> q;

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < i; ++j) {
            mul = i * j;
            cout << "i is "<< i << endl;
            cout << "j is " << j << endl;
            q.push(mul);
            if (mul == n) {
                cout << q.size() << endl;
                return 0;
            }
        }
    }
    return 0;
}
