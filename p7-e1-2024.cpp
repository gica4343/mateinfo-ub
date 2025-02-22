#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> n = {1, 1, 0, 5, 2, 0, 2, 4};

    int ac = 0;
    int i = 0;
    int op = 0;
    int nr = 1;
    while (i <= 7) {
        if (ac == n[i]) {
            i++;
            op++;
        } else {
            ac++;
            op++;
        }
        if (ac == 9) {
            ac = 0;
            op++;
        }
    }
    cout << op;
}
