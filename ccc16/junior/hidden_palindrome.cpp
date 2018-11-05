#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
    for (int i = 0; i < s.length(); ++i)
        if (s[i] != s[s.length() - i - 1]) 
            return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    for (int i = s.length(); i > 0; --i) {
        for (int j = 0; j <= s.length() - i; ++j) {
            if (is_palindrome(s.substr(j, i))) {
                cout << i;
                return 0;
            }
        }
    }
}
