#include <iostream>
using namespace std;
int main(){
	long long a, b, c, d, ans;
	cin >> a >> b >> c >> d;
	a = a % 100;
	b = b % 100;
	c = c % 100;
	d = d % 100;
	ans = (a * b * c * d);
	ans = ans % 100;
	if(ans < 10){
		cout << 0 << ans;
	}
	else {
		cout << ans;
	}
	return 0;
}