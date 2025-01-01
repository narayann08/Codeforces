#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main(){
	int n; cin >> n;
    int first = 0, second = 1, third;
    if(n==1){
    	cout << 0;

    }
    else if(n==2){
    	cout << 1;
    }
    else{
    	while(n>2){
    		third = first + second;
    		first = second;
    		second = third;
    		n--; 
    	}
    	cout << third;
    }
}