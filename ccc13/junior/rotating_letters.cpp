#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string text;
    cin >> text;
    
    regex rotatable("[IOSHZXN]");
    string result = regex_replace(text, rotatable, "");
    
    if (result == "") {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
