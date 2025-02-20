#include <iostream>

using namespace std;

int sum(int x) {
    int s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}
int main() {
    int n = 1000000;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int p3 = sum(i / 1000);
        int u3 = sum(i % 1000);
        if (p3 == u3) {
            count++;
        }
    }
    cout << count;
}
