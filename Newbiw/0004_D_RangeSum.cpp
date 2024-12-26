#include <iostream>
using namespace std;


int main() {
	int t;
	cin >> t;

	while(t--){
		long long l,r;
		cin >> l >> r;
		if(l > r){
			swap(l, r);
		}l--;
		long long left = l * 1ll * (l + 1) / 2;
		long long right = r * 1ll * (r + 1) /2;
		long long ans = right - left;
		cout << ans << endl;
	}
	return 0;
}