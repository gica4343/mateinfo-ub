#include <iostream>

using namespace std;

int inv(int x) {
    int rx = 0;
    while (x) {
        rx = rx * 10 + x % 10;
        x /= 10;
    }
    return rx;
}

int main() {
    int count = 0;

    for (int i = 1; i <= 2023; i++) {
        if (inv(i) < i) {
            count++;
        }
    }

    cout << count;
}
