#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int k; cin >> k;

    int a = (k*(k-1)) +1;

    int ans = (k*(2*a + (k-1) * 2)/ 2);
    cout << ans << endl;    
}