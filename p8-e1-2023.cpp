#include <iostream>

using namespace std;

int main() {
    int o1 = 24 * 3; // + 36
    int o2 = 15 * 5; // + 30
    int o3 = 3 * 25; // + 25
    int o4 = 40 * 2; // + 40
    cout << min(min(o1, o2), min(o3, o4));
}
// 72
// 75
// 75
// 80
