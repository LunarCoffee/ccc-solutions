#include <iostream>

using namespace std;

string repeat(string s, int t) {
    return string(t, s[0]) + string(t, s[1]) + string(t, s[2]) + "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    cin >> k;
    
    string icon[]{"*x*", " xx", "* *"};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << repeat(icon[i], k);
        }
    }
}
