#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int sq[4][4];
    vector<int> sums(8);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> sq[i][j];
            sums[i] += sq[i][j];
        }
    }
    
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            sums[i + 4] += sq[j][i];
    
    bool magic = true;
    for (int i = 1; i < 8; ++i)
        if (!(sums[i] == sums[i - 1]))
            magic = false;
    cout << (magic ? "magic" : "not magic") << "\n";
}
