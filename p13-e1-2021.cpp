#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &v) {
    if (v.size() < 3) {
        return 0;
    }
    long long res = 0;
    for (int i = 1; i <= v.size() - 2; i++) {
        res += v[i];
    }
    return res;
}

int main() {
    long long s = 0;
    int k = 1;
    int nr = 1;
    for (int i = 1; i <= 2020; i++) {
        vector<int> u;
        for (int j = 1; j <= nr; j++) {
            u.push_back(k);
            k++;
        }
        s += sum(u);
        nr++;
    }

    cout << s; // B.
}

