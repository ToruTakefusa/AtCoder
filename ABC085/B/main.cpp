#include <iostream>
#include <set>

using namespace std;

int main()
{
    size_t n;
    cin >> n;
    set<int> s;
    int tmp;
    for (size_t i = 0; i < n; ++i) {
        cin >> tmp;
        s.insert(tmp);
    }

    cout << s.size() << endl;
    return 0;
}
