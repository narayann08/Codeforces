#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

int isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
    if(n%i==0) return false;
    }return true;
}

signed main(){
    int n,i;
    cin >> n;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }   
}