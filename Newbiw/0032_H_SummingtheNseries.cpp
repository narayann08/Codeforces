#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define MOD 1000000007

signed main(){
    int tc; cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int ans = ((n % MOD) * (n % MOD)) % MOD;

        cout << ans << endl;
    }
}