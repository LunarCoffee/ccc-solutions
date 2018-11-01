#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string s, ns;
    cin >> k >> s;
    
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < s.length(); ++i) {
        ns += alphabet[(abs(s[i] - (3 * (i + 1) + k)) + 13) % 26];
    }
    cout << ns;
}
