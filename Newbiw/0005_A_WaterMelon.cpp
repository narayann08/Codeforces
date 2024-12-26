#include <iostream>
using namespace std;
int main(){
	int t=1;
	for(int i = 0; i < t; i++){
		int w;
		cin >> w;
		if(w % 2 == 0 && w > 2){
			cout << "Yes" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}