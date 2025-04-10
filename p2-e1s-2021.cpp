#include <iostream>

using namespace std;

int main() {
    int n = 2;
    int k = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                k--;
            } else {
                k++;
            }
        }
    }
    int kx = n * (n - 2) * n;
    cout << (kx == k);
}
