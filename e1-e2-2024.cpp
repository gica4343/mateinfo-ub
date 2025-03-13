#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> rn(n);
    for (auto& it : rn) {
        cin >> it;
    }
    
    int l = 1;
    long long r = *max_element(rn.begin(), rn.end());
    int b = 0;

    while (l <= r) {
        int mid = (l + r) / 2;
        
        long long p = 0;
        for (int i = 0; i < n; i++) {
            p += rn[i] / mid;
        }

        if (p >= m) {
            b = mid;
            l = mid + 1;
        } else {
            r= mid - 1;
        }
    }
    
    cout << b;
}