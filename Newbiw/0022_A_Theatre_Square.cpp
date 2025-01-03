#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int n, m, a;
    cin >> n >> m >> a;

    int x = (n+a-1)/a;
    int y = (m+a-1)/a;

    cout << x * y << endl;  

    return 0;  
}