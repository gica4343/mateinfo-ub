#include <iostream>
#include <random>

using namespace std;

float rnd() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dist(0.0, 1.0);
    return dist(gen);
}


bool F() {
    if (rnd() < 0.5) {
        return true;
    }
    if (rnd() < 0.4) {
        return false;
    }
    return rnd() < 0.3;
}

int main() {
    int p = 0;
    int n = 100000;
    for (int i = 0; i < n; i++) {
        if (F()) {
            p++;
        }
    }

    float pf = (float) p / n;
    cout << pf;
}
