#include <bits/stdc++.h>
using namespace std;

int t, c, ans, len;
vector<int> times;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> t >> c;
    times = vector<int>(c);
    for (int i = 0; i < c; ++i)
        cin >> times[i];

    while (c--) {
        auto min = min_element(times.begin(), times.end());
        if (*min + len > t)
            break;
        len += *min;
        ++ans;
        times.erase(min);
    }
    cout << ans;
}
