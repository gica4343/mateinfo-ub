#include <iostream>

using namespace std;

int main() {
    int s = 0;
    for (int i = 0; i < 6; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        s += max(max(a, b), c);
    }
    cout << s;
}
