#include <bits/stdc++.h>
using namespace std;

void finish_moves(int s, int c, int& d, int m) {
    for (int i = 0; i < s; ++i) {
        if (i % c < m)
            ++d;
        else --d;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, s, nd = 0, bd = 0;
    cin >> a >> b >> c >> d >> s;

    finish_moves(s, a + b, nd, a);
    finish_moves(s, c + d, bd, c);
    cout << ((nd == bd) ? "Tied" : (nd > bd) ? "Nikky" : "Byron");
}
