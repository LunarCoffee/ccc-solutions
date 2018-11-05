#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    string pairs[n][2];
    for (int i = 0; i < n; ++i)
        cin >> pairs[i][0];
    for (int i = 0; i < n; ++i)
        cin >> pairs[i][1];
    
    bool good = true;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (pairs[i][0] == pairs[i][1] || (pairs[i][0] == pairs[j][1] && !(pairs[i][1] == pairs[j][0]))) good = false;
    cout << (good ? "good" : "bad");
}
