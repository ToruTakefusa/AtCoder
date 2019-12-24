#include <iostream>

using namespace std;

#define SIZE 50
long long int mountain[SIZE];

int main() {
    size_t n;
    cin >> n;
    long long int w[n];
    for (size_t i = 0; i < n; ++i) {
        long long int tmp;
        cin >> tmp;
        w[i] = tmp;
    }

    for (size_t i = 0; i < SIZE; ++i) {
        mountain[i] = -1;
    }

    int last_index = -1;
    for (size_t i = 0; i < n; ++i) {
        if (last_index == -1) {
            mountain[0] = w[i];
            ++last_index;
            continue;
        }

        bool biggest = true;
        long long int smallest = 100000;
        int smallest_index = -1;

        for (size_t j = 0; j <= last_index; ++j) {
            if (mountain[j] >= w[i]) biggest = false;
            if ((mountain[j] >= w[i]) && (smallest > mountain[j])) {
                smallest = mountain[j];
                smallest_index = j;
            }
        }
        if (biggest) {
            ++last_index;
            mountain[last_index] = w[i];
            continue;
        }
        mountain[smallest_index] = w[i];
    }
    cout << last_index + 1 << endl;
}
