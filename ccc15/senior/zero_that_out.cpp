#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> nums;
    int temp;
    while (n--) {
        cin >> temp;
        if (!temp) nums.pop_back();
        else nums.emplace_back(temp);
    }
    cout << accumulate(nums.begin(), nums.end(), 0);
}
