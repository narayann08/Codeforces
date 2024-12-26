#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	char ch1, ch2;
	cin >> a >> ch1 >> b >> ch2 >> c;
	if(ch1 == '+'){
		if(a + b == c){
			cout << "Yes";
		}
		else{
			cout << a + b;
		}
	}
	else if(ch1 == '-'){
		if(a - b == c){
			cout << "Yes";
		}
		else{
			cout << a-b;
		}
	}
	else if(ch1 == '*'){
		if(a * b == c){
			cout << "Yes";
		}
		else{
			cout << a*b;
		}
	}
	return 0;
}