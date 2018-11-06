#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int g, p;
    cin >> g >> p;
    
    set<int> gates;
    for (int i = 1; i <= g; ++i)
        gates.insert(i);
    
    int landed = 0, temp;
    while (p--) {
        cin >> temp;
        auto ubp = gates.upper_bound(temp);
        if (ubp == gates.begin())
            break;
        gates.erase(--ubp);
        ++landed;
    }
    cout << landed;
}
