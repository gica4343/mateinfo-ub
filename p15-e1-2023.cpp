#include <iostream>

using namespace std;

int main() {
    int M[10][10];
    int n, m;
    cin >> n >> m;
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            M[i][j] = i * j;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << M[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << M[1][m] << ' ' << M[n][1];
}
