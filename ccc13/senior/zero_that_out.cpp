#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int year;
    cin >> year;
    ++year;
    
    for (; year <= 10234; ++year) {
        string temp = to_string(year);
        if (set<int>{temp.begin(), temp.end()}.size() == temp.size()) {
            cout << year;
            return 0;
        }
    }
}
