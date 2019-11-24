#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long long int answer = k * pow((k - 1), (n - 1));
    cout << answer << endl;
}
