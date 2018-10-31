#include <iostream>
#include <string>

using namespace std;

string get_lang(string s) {
    int ts = 0, ss = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 't' || s[i] == 'T') {
            ++ts;
        } else if (s[i] == 's' || s[i] == 'S') {
            ++ss;
        }
    }
    
    if (ss >= ts) {
        return "French";
    }
    return "English";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cin.ignore();
    
    string text;
    for (; n > 0; --n) {
        string temp;
        getline(cin, temp);
        text += temp;
    }
    cout << get_lang(text);
}
