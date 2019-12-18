#include <iostream>
#include <queue>

using namespace std;

int currency[] = {500, 100, 50, 10, 5, 1};

int solve (int payment) {
    int change = 1000 - payment;
    int quantity;

    int rc = 0;
    for (size_t i = 0; i < 6; ++i) {
        quantity = change / currency[i];
        change -= currency[i] * quantity;
        rc += quantity;
    }
    return rc;
}

int main() {
    int sum = 0;
    while(true) {
        cin >> sum;
        if (sum == 0) break;
        cout << solve(sum) << endl;
    }
}
