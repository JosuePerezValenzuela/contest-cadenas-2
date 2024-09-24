#include <bits/stdc++.h>

using namespace std;

int main() {
    string num;
    cin >> num;
    int tam = num.size() - 1;
    int cambio = -1;
    int digMin = 9;
    for (int i = 0; i <= tam; ++i) {
        int actual = num[i] - '0';
        if (actual % 2 == 0) {
            cambio = i;
            digMin = actual;
            if (digMin < num[tam] - '0') {
                break;
            }
        }
    }
    if (cambio != -1) {
        swap(num[cambio], num[tam]);
    }
    if (digMin == 9) {
        cout << "-1" << endl;
    } else {
        cout << num << endl;
    }
    return 0;
}