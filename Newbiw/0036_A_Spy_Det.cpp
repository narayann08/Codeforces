#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int tc; cin >> tc;

    while(tc--){
        int n; cin >> n;

        vector<int> v(3*n, 0);

        for(int i=0; i<n; ++i){
            cin >> v[i];
            v[i+n] = v[i+2*n] = v[i];
        }

        for(int i=n; i<2*n; ++i){
            if(v[i] != v[i-1] && v[i-1] == v[i+1]){
                cout << i-n+1 << endl;
                break;
            }
        }        
    }    
}