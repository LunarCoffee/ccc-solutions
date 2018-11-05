#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string msg;
    getline(cin, msg);
    
    int happy = 0, sad = 0;
    for (int i = 0; i < msg.length() - 2; ++i) {
        string chunk = msg.substr(i, 3);
        if (chunk == ":-)") ++happy;
        else if (chunk == ":-(") ++sad;
    }
    
    if (happy == 0 && sad == 0) cout << "none";
    else if (happy == sad) cout << "unsure";
    else if (happy > sad) cout << "happy";
    else cout << "sad";
}
