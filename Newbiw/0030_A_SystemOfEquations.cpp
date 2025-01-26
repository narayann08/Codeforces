#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int n, m, ans=0;
    cin >> n >> m;
    for(int a=0; a*a<=n; a++){   // TC: O(^N * ^M)
        for(int b=0; b*b<=m; b++){
            if(((a*a + b) == n) && ((b*b + a) == m)) {
                ans++;
            }
        }
    }
    cout << ans;    
}
