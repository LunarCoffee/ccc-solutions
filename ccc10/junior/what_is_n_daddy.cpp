#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n == 1 || n > 8)
        cout << 1;
    else if (n > 3 && n < 7)
        cout << 3;
    else cout << 2;
}
