#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    if (a.length() == 1 && a == "a") {
        cout << -1 << endl;
        return 0;
    }
    cout << "a" << endl;
}
