#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d, t, min;
    cin >> a >> b >> c >> d >> t;
    min = abs(a - c) + abs(b - d);
    cout << ((min <= t && !((t - min) & 1)) ? "Y" : "N");
}
