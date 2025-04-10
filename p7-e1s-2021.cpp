#include <iostream>

using namespace std;

int test(int n, int x) {
    if (n == 0) {
        return 1;
    } else if (x > n) {
        return 0;
    } else {
        return test(n - x, x + 1);
    }
}

int main() {
    cout << test(1, 0);
}
