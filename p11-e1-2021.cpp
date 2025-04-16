#include <iostream>

using namespace std;


int main() {
    float nMax = 544.5;
    int n = 1;
    int s = 0;
    while (s <= nMax) {
        cout << n << ' ';
        s += n;
        n++;
    }
    
    int res = n - 1;
    n -= 2;
    res += n;
    
    while (n >= 1) {
        cout << n << ' ';
        n--;
    }

    cout << '\n';
    cout << res;
}
