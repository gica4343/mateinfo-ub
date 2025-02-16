#include <iostream>

using namespace std;

int A(int x) {
    if (x <= 1) {
        return x;
    }
    return A(x - 1) + A(x - 2);
}


int B(int x) {
    if (x <= 1) {
        return 1;
    }
    return B(x / 2) + B(x / 2);
}

int C(int x) {
    if (x < 0) {
        return 0;
    }
    return 1 + C(x - 10);
}
int main() {
    long long int a = A(25);
    long long int b = B(25);
    long long int c = C(25);

    cout << c << ' ' << b << ' ' << a;
}
