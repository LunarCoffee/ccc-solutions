#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int w, n;
    int a = 0, b = 0, c = 0, d = 0, crossed = 0;
    cin >> w >> n;
    
    while (n--) {
        a = b;
        b = c;
        c = d;
        cin >> d;
        if (a + b + c + d > w) 
            break;
        ++crossed;
    }
    cout << crossed;
}
