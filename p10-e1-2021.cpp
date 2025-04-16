#include <iostream>
#include <set>

using namespace std;

bool prim(int n) {
    if (n <= 1) {
        return false;
    }

    int nrDiv = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            nrDiv++;
        }
    }
    return (nrDiv == 2);
}

bool dist(int n) {
    set<int> seen;
    while (n) {
        if (seen.find(n % 10) != seen.end()) {
            return false;
        } else {
            seen.insert(n % 10);
        }
        n /= 10;
    }
    return true;
}

int main() {
    int n = 99999;
    for (int i = n; i >= 10000; i--) {
        if (prim(i) && dist(i)) {
            cout << i % 37;
            break;
        }
    }
}
