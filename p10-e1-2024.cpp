#include <iostream>

using namespace std;

int fact(int x) {
    if (x == 0) {
        return 1;
    }
    return x * fact(x - 1);
}

int main() {
    int s = 0;
    for (int i = 1; i <= 4; i++) {
        int a = (fact(4) / fact(4 - i));
        s += a;
    }
    cout << s;
}
