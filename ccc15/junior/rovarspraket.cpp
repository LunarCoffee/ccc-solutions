#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string text;
    cin >> text;
    
    string c = "bcdfghjklmnpqrstvwxyz";
    string v = "aaeeeiiiiooooouuuuuuu";
    string sc = "cdfghjklmnpqrstvwxyzz";
    
    string new_text;
    for (int i = 0; i < text.length(); ++i) {
        new_text += text[i];
        if (string("aeiou").find(text[i]) == string::npos) {
            new_text += v[c.find(text[i])];
            new_text += sc[c.find(text[i])];
        }
    }
    cout << new_text;
}
