# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(size_t i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
    }

    for (size_t i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        b[i] = tmp;
    }

    sort(a, a + n);
    sort(b, b + n);

    int count = 0;
    int win_count = 0;
    do {
        do {
            int win = 0;
            int lose = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] > b[i]) ++win;
                if (a[i] < b[i]) ++lose;
            }
            if (win > lose) ++win_count;
            ++count;
        }while(next_permutation(b, b + n));
    }while(next_permutation(a, a + n));

    double probability = static_cast<double>(win_count) / static_cast<double>(count);
    cout << probability << endl;
}
