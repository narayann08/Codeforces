#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define MOD 1e9+7

signed main(){
    int tc; cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int ans = ((n % MOD) * (n % MOD)) % MOD;

        cout << ans << endl;
    }
}

// we cant use the loop as the size is 10^16.
// it will be tle.(Time Limit Exceeded)