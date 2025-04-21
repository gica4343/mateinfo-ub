#include <iostream>

using namespace std;

int main() {
    int v[50][50] {0};
    for (int i = 1; i <= 50; i++) {
        for (int j = 1; j <= 50; j++) {
            if ((50 * (i - 1)) + j % 7 == 0 || (50 * (i - 1)) + j % 13 == 0) {
                v[i][j] = 1;
            }
        }
    }
 
    for (int i = 1; i <= 50; i++) {
        for (int j = 1; j <= 50; j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }

}
