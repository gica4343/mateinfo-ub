#include <iostream>

using namespace std;

int main() {
    char cuvinte[10][5] = {"mate", "buri", "mute", "mese", "cute",
                           "mare", "iute", "sute", "sate", "muri"};
    int count = 0;
    for (int i = 0; i < 10; i++) {
        char cuv = cuvinte[0][4];
        for (int j = i + 1; j < 10; j++) {
            char cuv2 = cuvinte[j][4];
            int dif = 0;
            for (int k = 0; k < 5; k++) {
                if (cuvinte[i][k] != cuvinte[j][k]) {
                    dif++;
                }
            }
            if (dif == 1) {
                count++;
            }
        }
    }
    cout << count;
}
