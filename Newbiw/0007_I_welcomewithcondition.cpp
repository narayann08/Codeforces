#include <iostream>
using namespace std;

func(int a, int b){
	if(a >= b){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}

int main(){
	int a,b;
	cin >> a >> b;
	func(a, b);
}