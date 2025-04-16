#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    // 12 13 25 26 27 28 38 38
    
    vector<int> v = {12, 13, 25, 26, 27, 28, 38, 38};
    int j = v.size() - 1;
    while (j >= 0) {
        int xj = j;
        int sMax = 0;
        while (sMax <= 99 && xj >= 0) {
            sMax += v[xj];
            xj--;
        }
        cout << sMax << ' ';
        j--;
    }
}
