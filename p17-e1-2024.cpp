#include <iostream>

using namespace std;

int main() {
    // Lungimea secretului (excluzand ’\0’).
    int n = 12;
    // Secretul, format din n+1 caractere (incluzand caracterul ’\0’).
    char secret[13] = {109, 97, 21, 4, 89, 40,
                       62, 39,  98, 72, 9, 35}; // secretul lipseste
    for (int i = n - 1; i > 0; i--) {
        for (int j = 2 * i; j < n; j += i) {
            secret[j] = secret[j] ^ secret[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << secret[i] << ' ';
    }
}
