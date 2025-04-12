#include <iostream>

using namespace std;

int f(int t[10000], int n) {
    int i = 0, s = 0;
    while (i < n) {
        int j = i + 1;
        while (j < n && t[i] == t[j]) {
            j++;
        }
        s++;
        i = j;
    }
    return s;
}

int main() {
    int t[10000] = {1, 2, 2, 2, 4, 9, 9, 10, 11};
    cout << f(t, 9);
    // A.
}
