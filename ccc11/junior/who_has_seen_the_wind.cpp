#include <iostream>
#include <cmath>

using namespace std;

int calculate_time(int h, int l) {
    int a;
    int t = 0;
    
    while ((a = -6 * pow(t, 4) + h * pow(t, 3) + 2 * pow(t, 2) + t) > 0 && t < l)
        ++t;
        
    return (a < l) ? t : -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, l;
    cin >> h >> l;

    int time = calculate_time(h, l);

    if (time == -1) {
        cout << "The balloon does not touch ground in the given time.";
    } else {
        cout << "The balloon first touches ground at hour:\n" << time;
    }
}
