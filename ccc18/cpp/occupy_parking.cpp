#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    string yst, td;
    cin >> yst >> td;
    
    int shared = 0;
    for (--n; n >= 0; --n) {
        if (yst[n] == 'C' && td[n] == 'C') {
            ++shared;
        }
    }
    cout << shared;
}
