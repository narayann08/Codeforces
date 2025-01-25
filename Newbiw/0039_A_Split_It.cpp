#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int k; cin >> k;
        string s; cin >> s;
        if(k==0) cout << "YES" << endl;
        else{
            int count = 0;
            for(int i=0; i<s.size(); i++){
                if(s[i] == s[n-1-i]){
                    count++;
                }
                else break;
            }

            if(n%2 ==0){
                if(k<=count && k<n/2){ // here second doesn't satisfy, spcially for 6 3 - aaaaaa
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                if(k<=count){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl; 
                }
            }
        }
    }
}