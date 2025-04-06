#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> fib(10);
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < 10; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[9];
}
