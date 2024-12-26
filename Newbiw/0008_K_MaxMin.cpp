#include <iostream>
#include<algorithm> // for max and min
using namespace std;

int main(){
    
    long long a,b,c; 
	cin >> a >> b >> c;
	
	cout << min({a,b,c}) << " " << max({a,b,c}) << endl;

	return 0;
} 