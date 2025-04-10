#include <iostream>
#include <vector>

using namespace std;

int nrOp = 0;

void rotateVec(vector<int> &vec, int i) {
    if (i < 2 || i > vec.size() - 1) {
        return;
    }
    int t = vec[i];
    for (int j = i; j >= 0; j--) {
        vec[j] = vec[j - 1];
    }
    vec[0] = t;
    nrOp++;
}

int main() {
    vector<int> x = {30, 19, 4, 5, 3, 17, 15, 16, 2, 13, 20, 21, 23, 24, 22, 1, 10, 6, 7, 8, 9, 11, 25, 26, 27, 28, 29, 12, 14, 18};
    vector<int> y = {30, 2, 19, 29, 25, 1, 5, 15, 22, 18, 27, 10, 4, 3, 17, 16, 13, 20, 21, 23, 24, 6, 7, 8, 9, 11, 26, 28, 12, 14};
    vector<int> a = {1, 2, 3};
    vector<int> b = {2, 1, 3};

    bool e = false;
    for (int i = 2; i <= a.size() - 1; i++) {
        rotateVec(a, i);
        if (a == b) {
            e = true;
            break;
        }
    }

    if (e) {
        cout << nrOp;
    } else {
        cout << "Nu se poate obtine";
    }
}