#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> grad;
    for (int i = 0; i < 14; i++) {
        int a, b;
        cin >> a >> b;
        grad[a] = b;
    }

    int nod_min = 0;
    for (auto& it : grad) {
        if (it.second % 2 != 0) {
            nod_min++;
        }
    }

    cout << nod_min;
}
