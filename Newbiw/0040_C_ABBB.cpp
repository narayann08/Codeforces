#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int tc; cin >> tc;
    while(tc--){
      string s; cin >> s;

      int stk = 0;
      for(int i=0; i<s.size(); i++){
         if(stk && s[i] == 'B') stk--;
         else stk++;
      }
      cout << stk << endl;
    }   
}