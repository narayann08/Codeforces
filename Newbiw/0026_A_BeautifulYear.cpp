#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int y;
    cin >> y;
    
    int next_year = y + 1;
    while (true) {
        string year_str = to_string(next_year);
        unordered_set<char> digits(year_str.begin(), year_str.end());
        if (digits.size() == year_str.size()) {
            cout << next_year << endl;
            break;
        }
        next_year++;
    }
    return 0;
}
