#include <iostream>
#include <vector>

using namespace std;

bool prim(int x) {
    if (x <= 1) {
        return false;
    }

    int nrDiv = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            nrDiv++;
        }
    }
    
    return (nrDiv == 2);
}

int main() {
    int n = 50;
    unsigned long long int p = 1;
    for (int i = 1; i <= n; i++) {
        if (prim(i)) {
            p *= i;
        }
    }
    cout << p % 10000;
}
