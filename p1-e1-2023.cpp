#include <iostream>
#include <cstdint>
#include <fstream>

using namespace std;

long long fact(int x) {
    if (x == 0) {
        return 1;
    }
    return x * fact(x - 1);
}

int main() {
    unsigned sum = 0;
    for (int i = 1; i <= 5; i++) { 
        sum += fact(i);
    }
    cout << sum % 10;
}
