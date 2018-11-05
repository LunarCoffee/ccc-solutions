#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3));
    
    int dist = 0;
    while (dist < 240) {
        ++m;
        if (m >= 60) {
            ++h;
            m = 0;
        }
        h %= 24;
        
        if ((h > 7 && h < 10) || (h == 7 && m > 0) || (h > 15 && h < 19) || (h == 15 && m > 0)) 
            ++dist;
        else dist += 2;
    }
    cout << setw(2) << setfill('0') << h << ":" << setw(2) << m;
}
