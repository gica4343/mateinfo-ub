#include <iostream>

using namespace std;

long long unsigned int s = 0;

void f(int n, unsigned long long int k, unsigned long long int t) {
    if (n >= 0) {
        if (k <= t) {
            s += k;
            f(n, k + 1, t);
        } else {
            f(n - 1, 1, 2 * t);
        }
    }
}

int main() {
    f(15, 1, 1);
    cout << s;
}
