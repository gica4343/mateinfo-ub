#include <iostream>
#include <vector>

using namespace std;

long long cpow(int a, int x) {
    if (a == 0 || x == 0) {
        return -1;
    }
    int n = a;
    for (int i = 0; i < x; i++) {
        n *= n;
    }
    return n;
}

int noOfDigits(int x) {
    int c = 0;
    while (x) {
        x /= 10;
        c++;
    }
    return c;
}

void shiftLeft(vector<int> &v) {
    int x = v[0];
    for (int i = 0; i < v.size(); i++) {
        v[i] = v[i + 1];
    }
    v[v.size() - 1] = x;
}

vector<int> intToVec(int x) {
    vector<int> res;
    res.resize(noOfDigits(x));
    for (int i = res.size() - 1; i >= 0; i--) {
        res[i] = x % 10;
        x /= 10;
    }
    return res;
}

int vecToInt(vector<int> v) {
    int p = 10;
    int x = 0;
    for (int i = 0; i < v.size(); i++) {
        x += v[i];
        x *= 10;
    }
    x /= 10;
    return x;
}

int main() {
    int n;
    cin >> n;
    vector<int> vx(n);
    for (int i = 0; i < n; i++) {
        cin >> vx[i];
    }
    
    bool b = true;
    for (int i = 0; i < vx.size(); i++) {
        int x = vx[i];
        while (vx[i] < vx[i - 1]) {
            vector<int> temp = intToVec(vx[i]);
            shiftLeft(temp);
            int t = vecToInt(temp);
            vx[i] = t;
            if (t == x) {
                b = false;
                break;
            }
        }
    }
    
    if (b) {
        cout << "DA" << '\n';
        for (auto &i : vx) {
            cout << i << ' ';
        }
    } else {
        cout << "NU" << '\n';
    }
}
