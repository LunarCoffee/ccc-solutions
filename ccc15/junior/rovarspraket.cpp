#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string text;
    cin >> text;
    
    string c = "bcdfghjklmnpqrstvwxyz";
    string new_text{};
    for (int i = 0; i < text.length(); ++i) {
        new_text += text[i];
        if (string("aeiou").find(text[i]) == string::npos) {
            new_text += string("aaeeeiiiiooooouuuuuuu")[c.find(text[i])];
            new_text += string("cdfghjklmnpqrstvwxyzz")[c.find(text[i])];
        }
    }
    cout << new_text;
}
