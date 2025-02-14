#include <algorithm>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>

using namespace std;

bool is_graph(vector<int> v) {
    sort(v.begin(), v.end(), greater<>());

    if (v[0] > v.size()) {
        return false;
    }

    if (v[v.size() - 1] < 0) {
        return false;
    }

    if (!v[0]) {
        return true;
    }

    int sum = accumulate(v.begin(), v.end(), 0);

    if (sum % 2) {
        return false;
    }

    int first = v[0];
    v.erase(v.begin());
    for (int i = 0; i < first; i++) {
        v[i]--;
    }

    return is_graph(v);
}

int main() {
    vector<int> c1 = {3, 4, 4};

    int sum_rez = is_graph(c1) + 0;
}
