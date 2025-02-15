#include <iostream>
#include <random>
#include <vector>

using namespace std;

int rand_char() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(97, 98);
    return dist(gen);
}

int main() {
    int count = 0;
    vector<string> h;
    for (int i = 0; i < 10000; i++) {
        vector<char> s(9);
        for (int j = 0; j < 10; j++) {
            s[j] = (char)rand_char();
        }
        int a = 0;
        int b = 0;
        for (int j = 0; j < 10; j++) {
            if (s[j] == 'a') {
                a++;
            } else if (s[j] == 'b') {
                b++;
            }
        }
        if (a == 5 && b == 5) {
            for (int j = 0; j < 10; j++) {
            }
        }
    }
}
