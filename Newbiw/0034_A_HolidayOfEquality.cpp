#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int n; cin >> n;

    int maxm = -1;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
        maxm = max(maxm, v[i]);
    }    

    int ans=0;
    for(int i=0; i<n; i++){
        ans = ans + (maxm-v[i]);
    }

    cout << ans << endl;
}