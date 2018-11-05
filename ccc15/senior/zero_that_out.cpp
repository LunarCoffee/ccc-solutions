#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    stack<int> nums;
    int temp;
    while (n--) {
        cin >> temp;
        if (!temp) 
            nums.pop();
        else nums.emplace(temp);
    }
    
    int sum = 0;
    while (!nums.empty()) {
        sum += nums.top();
        nums.pop();
    }
    cout << sum;
}
