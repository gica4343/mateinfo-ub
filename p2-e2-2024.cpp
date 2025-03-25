#include <iostream>

using namespace std;

int main() {
    int A, B, x;
    cin >> A >> B >> x;

    if (A - B != x && B - A != x) {
        cout << "IMPOSIBIL" << '\n';
        return 0;
    }
    cout << "2" << '\n';
    if (A > B) {
        cout << "UMPLE A" << '\n' << "VARSA A IN B" << '\n';
    } else {
        cout << "UMPLE B" << '\n' << "VARSA B IN A" << '\n';
    }
}
