#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int month, day;
    cin >> month >> day;

    if (month == 2 && day == 18) {
        cout << "Special";
    } else if (month < 2 || (month == 2 && day < 18)) {
        cout << "Before";
    } else {
        cout << "After";
    }
}
