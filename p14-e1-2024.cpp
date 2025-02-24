#include <iostream>
#include <random>
#include <vector>

using namespace std;

int rand_i() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 4);
    return dist(gen);
}

int main() {
    int n = 900;
    vector<int> c = {275, 205, 380, 720, 340};

    int m = 0;
    for (int i = 1; i <= 1000; i++) {
        int count = 0;
        int s = 0;
        while (s + c[rand_i()] <= n) {
            s += c[rand_i()];
            count++;
        }
        m += count;
    }

    double res = (double) m / 1000;
    cout << res;
}
