#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p.push_back(x);
    }

    vector<pair<int, int>> pr;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        pr.push_back({a, b});
    }

    vector<string> r(pr.size());
    for (const auto &el : pr) {
        vector<int> nr;
        if (el.first == el.second == 0) {
            r.push_back("DA");
        } else if (el.second - el.first == 1) {
            r.push_back("NU");
        } else {
            int max_j = 0;
            int max_i =
                accumulate(p.begin() + el.first, p.end() - el.second, 0);
            for (int i = el.first; i <= el.second; i++) {
                if (p[i] > max_j) {
                    max_i = p[i];
                }
            }
            if (max_i <= 2 * max_j) {
                r.push_back("DA");
            } else {
                r.push_back("NU");
            }
        }
    }
    for (auto &it : r) {
        cout << it << '\n';
    }
}
