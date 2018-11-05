#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> as(n), bs(n);
    for (int i = 0; i < n; ++i) cin >> as[i];
    for (int i = 0; i < n; ++i) cin >> bs[i];
    
    int prev = 0, sa = 0, sb = 0;
    for (int i = 0; i < n; ++i) {
        sa += as[i];
        sb += bs[i];
        if (sa == sb) prev = i + 1;
    }
    cout << prev;
}
