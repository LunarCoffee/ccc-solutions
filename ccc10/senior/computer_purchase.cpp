#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        
    int n;
    cin >> n;
    
    vector<pair<string, int>> v(n);
    string name;
    int r, s, d;
    for (int i = 0; i < n; ++i) {
        cin >> name >> r >> s >> d;
        v[i] = make_pair(name, 2 * r + 3 * s + d);
    }
    
    sort(v.begin(), v.end(), [](pair<string, int> &a, pair<string, int> &b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    });
    
    for (int i = 0; i < min(n, 2); ++i)
        cout << v[i].first << "\n";
}
