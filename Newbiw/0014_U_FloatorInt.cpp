#include <bits/stdc++.h>
using namespace std;
int main(){
	double n;
	cin >> n;
	if(ceil(n) == floor(n)){
		cout << "int " << n << endl;
	}
	else{
		cout << "float " << floor(n) << " " << n - floor(n) << endl;
	}
	return 0;
}