#include <iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;

	long long ans = (n * 1ll * (n + 1)/2);
	cout << ans << endl;

	return 0;
}