#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int n,m1,m2,w1,w2; cin >> n;
    int s1,s2,s3,s4;
    for(int i=0; i<n; i++){
        cin >> s1 >> s2 >> s3 >> s4;
    m1 = max({s1,s2,s3,s4});
    if(m1 == s1){
        m2 = max({s2,s3,s4});
    }
    else if(m1 == s2){
        m2 = max({s1,s3,s4});
    }
    else if(m1 == s3){
        m2 = max({s1,s2,s4});
    }
    else if(m1 == s4){
        m2 = max({s1,s2,s3});
    }

    w1 = max(s1,s2);
    w2 = max(s3,s4); 

    if((m1 == w1 || m1 == w2) && (m2 == w1 || m2 == w2)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    } 
}