#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v;
    string votes;
    cin >> v >> votes;
    
    int as = count(votes.begin(), votes.end(), 'A');
    int bs = v - as;
    
    if (as > bs) 
        cout << "A";
    else if (as < bs) 
        cout << "B";
    else cout << "Tie";
}
