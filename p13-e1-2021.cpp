#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> v;

    int i = 1;
    int j = 5;
    int nr = 1;
    while (i <= j) {
        vector<int> x;
        for (int k = 1; k <= i; i++) {
            x.push_back(nr);
            nr++;
        }
        v.push_back(x);
        i++;
    }
}
