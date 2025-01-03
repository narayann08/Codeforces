#include <iostream>
using namespace std;

int cal(int arr[], int n) {
    int even = 0, odd = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    int diff = abs(even - odd);
    return (diff % 2 == 0) ? diff / 2 : -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << cal(arr, n) << endl;
    }

    return 0;
}
