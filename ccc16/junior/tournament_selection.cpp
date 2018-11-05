#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int wins = 0;
    char temp;
    for (int i = 0; i < 6; ++i) {
        cin >> temp;
        if (temp == 'W') ++wins;
    }
    
    if (!wins)  cout << -1;
    else if (wins < 3) cout << 3;
    else if (wins < 5) cout << 2;
    else cout << 1;
}
