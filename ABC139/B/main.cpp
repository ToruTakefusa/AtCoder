#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int answer = static_cast<int>(ceil((b - 1.0) / (a - 1.0)));
    cout << answer << endl;
    return 0;
}
