#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int q = 0; q < m; q++) {
        int a, b;
        cin >> a >> b;
        
        bool an = false;
        if (a == b == 0) {
            an = true;
            cout << "DA" << '\n';
        } else {
            for (int i = a; i <= b && !an; i++) {
                for (int j = a; j <= b; j++) {
                    if (i != j && p[i] >= p[j] && p[i] <= 2 * p[j]) {
                        an = true;
                        break;
                    }
                }
            }
            cout << (an ? "DA" : "NU") << '\n';
        }
    }
}
