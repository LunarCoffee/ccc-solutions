#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int type, n;
    cin >> type >> n;
    
    int dmoj[n], peg[n];
    for (int i = 0; i < n; ++i)
        cin >> dmoj[i];
    for (int i = 0; i < n; ++i)
        cin >> peg[i];
    
    sort(dmoj, dmoj + n);
    sort(peg, peg + n, [&](int a, int b) { return type & 1 ? a < b : a > b; });
    
    int total = 0;
    while (n--)
        total += max(dmoj[n], peg[n]);
    cout << total;
}
