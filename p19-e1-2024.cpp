#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

long long fact(int x) {
    if (x == 0) {
        return 1;
    }
    return x * fact(x - 1);
}

void digit(int n, vector<int> &v) {
    vector<int> temp;

    while (n > 0) {
        temp.push_back(n % 10);
        n /= 10;
    }

    reverse(temp.begin(), temp.end());

    v.insert(v.end(), temp.begin(), temp.end());
}

int count(const vector<int> &v) {
    unordered_map<int, int> freq;

    for (auto it : v) {
        if (it == 2 || it == 0 || it == 4) {
            freq[it]++;
        }
    }
    int n = freq[2] + freq[0] + freq[4];
    int k = 4;
    long long a = (long long)fact(n) / fact(n - k);
    return a;
}

int main() {
    vector<int> v;
    int n = 2024;

    for (int i = 1; i <= n; i++) {
        if (i <= 9) {
            v.push_back(i);
        } else {
            digit(i, v);
        }
    }

    v.erase(remove_if(v.begin(), v.end(),
                      [](int x) { return x != 2 && x != 0 && x != 4; }),
            v.end());
    int r = count(v);
    cout << r;
}
