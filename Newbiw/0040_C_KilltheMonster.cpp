#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
    int tc; cin >> tc;
    while(tc--){
        int hc, dc, hm, dm;
        cin >> hc >> dc >> hm >> dm;
        int k,w,a; cin >> k >> w >> a;
        int flag = 0;
        for(int i=0; i<=k; i++){
            int ca = i;
            int cb = k - i;

            int newattack = dc + ca * w;
            int newhealth = hc + cb * a;
            int monsterturn, characterturn;

            if(newhealth % dm == 0){
                monsterturn = newhealth / dm;
            }
            else{
                monsterturn = newhealth / dm + 1;
            }

            if(hm % newattack == 0){
                characterturn = hm / newattack;
            }
            else{
                characterturn = hm / newattack + 1;
            }

            if(characterturn <= monsterturn){
                flag = 1;
                break;
            }
        }


        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }   
}