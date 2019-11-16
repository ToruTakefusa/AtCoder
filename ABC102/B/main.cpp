#include <iostream>
#include <vector>

using namespace std;

int main() {
    size_t n;
    cin >> n;
    vector<int> vec(n);

    for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
        cin >> *itr;
    }

    int max = *max_element(vec.begin(), vec.end());
    int min = *min_element(vec.begin(), vec.end());
    cout << (max - min) << endl;
    return 0;
}
