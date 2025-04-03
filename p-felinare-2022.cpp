#include <iostream>
#include <vector>

using namespace std;

void fillFx(vector<int> &fx, int l, int r) {
    for (int i = l; i <= r; i++) {
        fx[i] = 1;
    }
}

bool zero(vector<int> &fx, vector<int> f, int index) {
    int count = 0;
    for (int i = index - f[index]; i <= f[index] + index; i++) {
        if (fx[i] == 0) {
            count++;
        }
    }
    return (count > 2);
}

int main() {
    int N;
    cin >> N;
    vector<int> f(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> f[i];
    }
    //  i - fi >= 1 && i + fi <= N
    vector<int> fx(N, 0);

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (i - f[i] >= 1 && i + f[i] <= N && zero(fx, f, i)) {
            count++;
            fillFx(fx, i - f[i], i + f[i]);
        }
    }
    cout << count;
}
