#include <bits/stdc++.h>
using namespace std;

string get_lang(string s) {
    int ts = 0, ss = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 't' || s[i] == 'T') ++ts;
        else if (s[i] == 's' || s[i] == 'S') ++ss;
    }
    return ss < ts ? "English" : "French";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cin.ignore();
    
    string text, temp;
    while (n--) {
        getline(cin, temp);
        text += temp;
    }
    cout << get_lang(text);
}
