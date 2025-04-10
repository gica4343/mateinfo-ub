#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sol = 0;
    for (int i = 1; i <= n; i++) {
        int nx = n;
        int ix = i;
        bool bad = 0;
        while (ix > 0 && !bad) {
            while (nx > 0 && nx != ix % 10) {
                nx /= 10;
            }
            if (nx == 0) {
                bad = 1;
            } else {
                nx /= 10;
                ix /= 10;
            }
        }
        if (!bad) {
            sol++;
        }
    }
    cout << sol;
}
