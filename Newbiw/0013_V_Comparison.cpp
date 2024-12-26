#include <iostream>
using namespace std;
int main(){
	int a, b;
	char ch;
	cin >> a >> ch >> b;
	if(ch == '>'){
		if(a > b){
			cout << "Right";
		}
		else{
			cout << "Wrong";
		}
	}
	else if(ch == '<'){
		if(a < b){
			cout << "Right";
		}
		else{
			cout << "Wrong";
		}
	}
	else if(ch == '='){
		if(a == b){
			cout << "Right";
		}
		else{
			cout << "Wrong";
		}
	}
	return 0;
}