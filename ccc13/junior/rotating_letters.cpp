#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string text;
    cin >> text;
    
    bool rot = true;
    for (auto i : text) {
        if (i != 'I' && i != 'O' && i != 'S' && i != 'H' && i != 'Z' && i != 'X' && i != 'N') rot = false;
    cout << (rot ? "YES" : "NO");
}
