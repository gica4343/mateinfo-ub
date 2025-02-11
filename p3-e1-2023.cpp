#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int d = 100 / 3;
    int dr = 100 % 3;
    float r = ceil((float) d / 7);
    cout << d + dr + r;
}
