#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ap = 100, dp = 100, r1, r2;
    cin >> n;

    while (n--) {
        cin >> r1 >> r2;
        if (r1 == r2) 
            continue;
        if (r1 > r2) 
            dp -= r1;
        else ap -= r2;
    }
    cout << ap << "\n" << dp;
}
