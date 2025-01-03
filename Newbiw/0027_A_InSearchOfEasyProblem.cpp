#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int n;
    cin >> n;
    bool hard = false; 

    for (int i = 0; i < n; ++i) {
        int r;
        cin >> r;
        if (r == 1) {
            hard = true;
            break;
        }
    }

    if (hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}
