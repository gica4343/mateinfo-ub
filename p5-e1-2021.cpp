#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 84;
    vector<int> bn;
    int i = 6;
    while (n) {
        bn.push_back(n % 2);
        n /= 2;
    }

    string res;
    for (int i = bn.size() - 1; i >= 0; i--) {
        if (bn[i] == 0) {
            res.push_back('A');
        } else {
            res.push_back('B');
        }
    }
    
    cout << res;
}
