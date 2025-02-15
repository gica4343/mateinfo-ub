#include <cstdlib>
#include <iostream>
#include <random>
#include <utility>
#include <vector>

using namespace std;

int r_rand() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 2);
    return dist(gen);
}

int main() {
    int n = 100000;
    int count = 0;
    for (int i = 0; i < n; i++) {
        vector<string> v = {"Alex", "Dan", "Matei"};
        for (int j = 0; j < 3; j++) {
            swap(v[j], v[r_rand()]);
        }

        if (v[0] == "Matei") {
            count++;
        }
    }

    double res = (double) count / n;
    cout << res; // D. 8/27
}
