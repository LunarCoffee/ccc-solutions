#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int month, day;
    cin >> month >> day;

    cout << ((month == 2 && day == 18) 
        ? "Special"
        : ((month < 2) 
            ? "Before"
            : ((month == 2 && day < 18) 
                ? "Before"
                : "After")));
}
