#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int k; cin >> k;
    int hour = 21, min = 0;

    while(k--){
        min++;
        if(min==60){
            min=0;
            hour++;
        }
    }    
    cout << hour << ":";
    if(min<=9){
        cout << '0';
    }
    cout << min;
}