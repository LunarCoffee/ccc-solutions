#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> locs(n);
    for (int i = 0; i < n; ++i) {
        cin >> locs[i];
    }
    sort(locs.begin(), locs.end());
    
    vector<double> sizes;
    for (int i = 1; i < n - 1; ++i) {
        sizes.emplace_back((locs[i] - locs[i - 1]) / 2.0 + (locs[i + 1] - locs[i]) / 2.0);
    }
    cout << fixed << setprecision(1) << *min_element(sizes.begin(), sizes.end());
}
