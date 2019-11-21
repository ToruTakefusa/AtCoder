#include <iostream>

using namespace std;

size_t count_increase(int a[], int start);
size_t count_decrease(int a[], int start);

int main () {
    size_t n;
    cin >> n;
    int a[n];

    for (size_t i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int count = 0;
    for (size_t i = 0; i < n; ) {
        size_t length_increase = count_increase(a, i);
        size_t length_decreaase = count_decrease(a, i);
        if (length_increase > length_decreaase) {
            i += length_increase;
            ++count;
        } else {
            i += length_decreaase;
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}


size_t count_increase(int a[], int start) {
    size_t length= 1;
    int before = a[start];
    for (size_t j = start + 1; j < sizeof (a); ++j) {
        if (a[j] >= before) {
            before = a[j];
            length++;
        } else {
            break;
        }
    }
    return length;
}

size_t count_decrease(int a[], int start) {
    size_t length = 1;
    int before = a[start];
    for (size_t j = start + 1; j < sizeof (a); ++j) {
        if (a[j] <= before) {
            before = a[j];
            length++;
        } else {
            break;
        }
    }
    return length;
}
