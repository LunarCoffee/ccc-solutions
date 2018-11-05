#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    cin >> k;
    
    string ic[] = {"*x*", " xx", "* *"};
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < k; ++j)
            cout << string(k, ic[i][0]) + string(k, ic[i][1]) + string(k, ic[i][2]) + "\n";
}
