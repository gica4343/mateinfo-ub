#include <iostream>
#include <set>

using namespace std;

int main() {
    int count = 0;
    for (int x = 5; x <= 999; x++) {
        int y = 1;
        set<int> seen;

        while (true) {
            y = (y * 2) % x;

            if (y == 3) {
                count++;
                break;
            }

            if (seen.count(y)) {
                break;
            }
            seen.insert(y);
        }
    }
    cout << count;
}
