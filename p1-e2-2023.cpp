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
        int test = 0;
        for (int k = a; k <= b; k++) {
            test += p[k];
        }
        int max_i = 0;
        for (const auto& it : p) {
            max_i = max(max_i, it);
        }
        if(abs(test - max_i - max_i) == 0) {
            cout << "DA" << '\n';
        } else {
            cout << "NU" << '\n';
        }
    }
}
