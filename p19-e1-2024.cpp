#include <cmath>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

long long fact(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    return n + fact(n - 1);
}

int main() {
    vector<int> v;
    int n = 2024;
    auto two_digit_n = [&](int ci) {
        if (ci % 10 == 0) {
            v.push_back(ci / 10);
            v.push_back(0);
        } else {
            int fd = ci / 10;
            int sd = ci % 10;
            v.push_back(fd);
            v.push_back(sd);
        }
    };
    auto three_digit_n = [&](int ci) {
        if (ci % 10 == 0 && ((ci / 10) % 10) == 0) {
            v.push_back(ci / 100);
            v.push_back(0);
            v.push_back(0);

        } else if ((ci / 10) % 10 == 0 && ci % 10 != 0) {
            v.push_back(ci / 100);
            v.push_back(0);
            v.push_back(ci % 10);
        } else {
            v.push_back(ci / 100);
            v.push_back((ci / 10) % 10);
            v.push_back(ci % 10);
        }
    };
    auto four_digit_n = [&](int ci) {
        if (ci % 10 == 0 && (ci / 10) % 10 == 0 && (ci / 100) % 10 == 0) {
            v.push_back(ci / 1000);
            for (int k = 0; k < 3; k++) {
                v.push_back(0);
            }
        } else if (ci % 10 != 0 && (ci / 100) % 10 == 0 &&
                   (ci / 10) % 10 == 0) {
            v.push_back(ci / 1000);
            v.push_back(0);
            v.push_back(0);
            v.push_back(ci % 10);
        } else if (ci % 10 == 0 && (ci / 10) % 10 != 0 &&
                   (ci / 100) % 10 == 0) {
            v.push_back(ci / 1000);
            v.push_back(0);
            v.push_back((ci / 10) % 10);
            v.push_back(0);
        } else if (ci % 10 == 0 && (ci / 10) % 10 != 0 &&
                   (ci / 100) % 10 != 0) {
            v.push_back(ci / 1000);
            v.push_back((ci / 100) % 10);
            v.push_back((ci / 10) % 10);
            v.push_back(0);
        } else if (ci % 10 != 0 &&
                   ((ci / 100) % 10 == 0 || (ci / 10) % 10 == 0)) {
            if ((ci / 100) % 10 == 0) {
                v.push_back(ci / 1000);
                v.push_back(0);
                v.push_back((ci / 10) % 10);
                v.push_back(ci % 10);
            } else if ((ci / 10) % 10 == 0) {
                v.push_back(ci / 1000);
                v.push_back((ci / 100) % 10);
                v.push_back(0);
                v.push_back(ci % 10);
            }
        } else if (ci % 10 == 0 && (ci / 10) % 10 == 0 &&
                   (ci / 100) % 10 != 0) {
            v.push_back(ci / 1000);
            v.push_back((ci / 100) % 10);
            v.push_back(0);
            v.push_back(0);
        } else {

            v.push_back(ci / 1000);
            v.push_back((ci / 100) % 10);
            v.push_back((ci / 10) % 10);
            v.push_back(ci % 10);
        }
    };

    for (int i = 1; i <= n; i++) {
        int ci = i;
        if (ci <= 9) {
            v.push_back(ci);
        }
        if (ci <= 99 && ci > 9) {
            two_digit_n(ci);
        }
        if (ci <= 999 && ci > 99) {
            three_digit_n(ci);
        }
        if (ci <= n && ci > 999) {
            four_digit_n(ci);
        }
    }

    vector<int> index(n, -1);
    for (int i = 0; i < 2024; i++) {
        if (v[i] == 2 || v[i] == 0 || v[i] == 2 || v[i] == 4) {
            index[i] = v[i];
        }
    }

    long long count = 0;
    for (int i = 0; i < index.size(); i++) {
        if (index[i] == 2 || index[i] == 0 || index[i] == 4) {
            count++;
        }
    }

    auto fn = (fact(count) / (fact(4) * fact(count - 4)));
    cout << fn;
}
