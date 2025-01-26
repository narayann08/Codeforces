#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    string n; cin >> n;
    int done=1, i=0;
    while(i<n.size()){  // O(N)
        if(i+2<n.size() && n.substr(i,3)=="144"){
            i += 3;
        }
        else if(i+1<n.size() && n.substr(i,2)=="14"){
            i += 2;
        }
        else if(n[i]=='1'){
            i++;
        }
        else{
            done=0;
            break;
        }
    }    
    if(done){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
