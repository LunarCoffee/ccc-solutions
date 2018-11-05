#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b;
    cin >> a >> b;
    
    for (auto i : "abcdefghijklmnopqrstuvwxyz") {
        if (count(a.begin(), a.end(), i) < count(b.begin(), b.end(), i)) {
            cout << "N";
            return 0;
        }
    }
    cout << "A";
}
