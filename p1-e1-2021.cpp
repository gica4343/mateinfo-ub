#include <iostream>

using namespace std;

bool mic(int x) {
    while (x) {
        if (x % 10 >= 7) {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main() {
    for (int i = 6666666; i >= 1000000; i--) {
        if (mic(i) && i % 7 == 0) {
            cout << i % 10;
            break;
        }
    }
}
