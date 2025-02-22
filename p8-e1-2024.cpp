#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t_max = 300;
    double a = (float)t_max / 17;
    double b = (float)t_max / 21;
    int c_max = ceil(a) + ceil(b);
    cout << c_max;
}
