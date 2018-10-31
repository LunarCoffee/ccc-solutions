#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, s;
    cin >> l >> s;
    
    int over = s - l;
    if (over <= 0) {
        cout << "Congratulations, you are within the speed limit!";
        return 0;
    } 
    
    cout << "You are speeding and your fine is ";
    if (1 <= over && over <= 20) {
        cout << "$100.";
    } else if (over >= 31) {
        cout << "$500.";
    } else {
        cout << "$270.";
    }
}
