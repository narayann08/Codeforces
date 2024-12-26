#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int n, int i){
	if(n<=1) return false;
	for(i=2; i*i<n; i++){
	if(n%i==0) return false;
	}return true;
}
int main(){
	int n,i;
	cin >> n;
	if(isPrime(n,i)){
	cout << i << " ";		
	}
	else{
		cout << endl;
	}
}