#include <iostream>
#include <queue>

using namespace std;

size_t GetSizeOdd(int a[], size_t n);
size_t GetSizeEven(int a[], size_t n);

int main() {
    size_t n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int b[n];
    for (size_t i = 0; i < n; ++i) {
        b[i] =  a[i];
    }

    size_t odd = GetSizeOdd(a, n);
    size_t even = GetSizeEven(b, n);
    if (odd <= even) {
        cout << odd << endl;
    } else {
        cout << even << endl;
    }
}


size_t GetSizeOdd(int a[], size_t n) {
    queue<int> que;
    int s_before = a[0];
    if (a[0] <= 0) {
        while(a[0] <= 0) {
            a[0] +=1;
            que.push(1);
        }
    }

    for (size_t i = 1; i < n; ++i) {
        int s = s_before + a[i];
        if (s_before < 0) {
            if (s > 0) {
                s_before = s;
                continue;
            } else {
                while(s <= 0) {
                    s += 1;
                    que.push(1);
                }
                s_before = s;
                continue;
            }
        } else {
            if (s < 0) {
                s_before = s;
                continue;
            } else {
                while (s >= 0) {
                    s -= 1;
                    que.push(-1);
                }
                s_before = s;
                continue;
            }
        }
    }
    return que.size();
}

size_t GetSizeEven(int a[], size_t n) {
    queue<int> que;
    if (a[0] >= 0) {
        while(a[0] >= 0) {
            a[0] -=1;
            que.push(-1);
        }
    }

    int s_before = a[0];
    for (size_t i = 1; i < n; ++i) {
        int s = s_before + a[i];
        if (s_before < 0) {
            if (s > 0) {
                s_before = s;
                continue;
            } else {
                while(s <= 0) {
                    s += 1;
                    que.push(1);
                }
                s_before = s;
                continue;
            }
        } else {
            if (s < 0) {
                s_before = s;
                continue;
            } else {
                while (s >= 0) {
                    s -= 1;
                    que.push(-1);
                }
                s_before = s;
                continue;
            }
        }
    }
    return que.size();
}
