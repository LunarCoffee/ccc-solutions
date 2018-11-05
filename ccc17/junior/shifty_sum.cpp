#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, s;
    cin >> n >> k;
    s = n;
    
    while (k--) n += s * pow(10, k + 1);
    cout << n;
}
