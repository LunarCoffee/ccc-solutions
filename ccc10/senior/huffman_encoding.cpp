#include <bits/stdc++.h>
using namespace std;

map<string, char> chars;

inline string parse(string s) {
    int pos = 0;
    string token, ns;
    while (pos < s.length()) {
        for (auto i : chars) {
            if (s.find(i.first, pos) == pos) {
                ns += i.second;
                pos += i.first.length();
                break;
            }
        }
    }
    return ns;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    cin >> k;
    
    string temp;
    char letter;
    while (k--) {
        cin >> letter >> temp;
        chars[temp] = letter;
    }
    cin >> temp;
    cout << parse(temp);
}
