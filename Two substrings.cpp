#include <bits/stdc++.h>

using namespace std;

bool verf(string pal) {
    string aux1 = pal;
    size_t pos_AB = aux1.find("AB");
    if (pos_AB != string::npos) {
        aux1[pos_AB] = '_';
        aux1[pos_AB + 1] = '_';
        size_t pos_BA = aux1.find("BA");
        if (pos_BA != string::npos) {
            return true;
        }
    }
    size_t pos_BA = pal.find("BA");
    if (pos_BA != string::npos) {
        pal[pos_BA] = '_';
        pal[pos_BA + 1] = '_';
        pos_AB = pal.find("AB");
        if (pos_AB != string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    string pal;
    cin >> pal;
    if (verf(pal)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
