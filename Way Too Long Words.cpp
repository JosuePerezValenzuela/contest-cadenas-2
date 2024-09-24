#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    string p;
    while(t--) {
        cin >> p;
        int len = p.length();
        cout << (len > 10 ? p[0] + to_string(len - 2) + p[len - 1] : p) << endl;
    }
    return 0;
}