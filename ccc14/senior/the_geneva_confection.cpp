#include <bits/stdc++.h>
using namespace std;

vector<int> c;
stack<int> b;

bool attempt_move(int req) {
    while (!c.empty() || !b.empty()) {
        if (!c.empty() && c.back() == req) {
            ++req;
            c.pop_back();
        } else if (!b.empty() && b.top() == req) {
            ++req;
            b.pop();
        } else if (!c.empty() && c.back() != req) {
            b.emplace(c.back());
            c.pop_back();
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tests;
    cin >> tests;
    
    while (tests--) {
        int cars;
        cin >> cars;
        copy_n(istream_iterator<int>(cin), cars, back_inserter(c));
        
        cout << (attempt_move(1) ? "Y" : "N") << "\n";
        c.clear();
        b = stack<int>();
    }
}
