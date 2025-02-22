#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int nr_div(int x) {
    int c = 0;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            c++;
        }

        if (i != x / i) {
            c++;
        }
    }
    return c;
}

int main() {
    int n = 24;
    vector<int> f(25, 0) ;

    for (int i = 2; i <= n + 1; i++) {
        f[nr_div(i)]++;
    }

    int s = 0;
    for (auto& it : f) {
        if (it != 0) {
            s += (it * (it - 1)) / 2;
        }
    }
    cout << s;
}
