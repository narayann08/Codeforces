 #include <bits/stdc++.h>
 using namespace std;
 
 // #define endl '\n'
 // #define int long long
 
 signed main(){
    int tc; cin >> tc;
    while(tc--){
    string s; 
    cin >> s;
    int i = s.find("11");
    int j = s.rfind("00");

    cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;
    }
 }

