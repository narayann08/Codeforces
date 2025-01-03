#include <iostream>
using namespace std;

int main() {
    int cards[5], counts[14] = {0};
    for(int i = 0; i < 5; ++i) {
        cin >> cards[i];
        counts[cards[i]]++;
    }

    int three = 0, two = 0;
    for(int i = 1; i <= 13; ++i) {
        if(counts[i] == 3) three++;
        if(counts[i] == 2) two++;
    }

    if(three == 1 && two == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
