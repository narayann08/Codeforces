#include <iostream>
using namespace std;
int main() {
    int a,b,c,x,y,z;
    cin >> a >> b >> c;
     
    x = a, y = b, z = c;
    if(a>b){
        swap(a,b);
    }
    if(b>c){
        swap(b,c);
        if(a>b){
            swap(a,b);
        }
    }

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;

}