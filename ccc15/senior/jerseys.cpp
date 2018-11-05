#include <bits/stdc++.h>
using namespace std;

int process_request(vector<char> &available, pair<char, int> req) {
    static unordered_map<char, int> sizes{{'S', 0}, {'M', 1}, {'L', 2}};
    int pos = req.second - 1;
    
    if (available[pos] != ' ' && sizes[available[pos]] >= sizes[req.first]) {
        available[pos] = ' ';
        return 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int j, a;
    cin >> j >> a;
    
    vector<char> available(j);
    for (int i = 0; i < j; ++i)
        cin >> available[i];
    
    int served = 0;
    for (int i = 0; i < a; ++i) {
        pair<char, int> req;
        cin >> req.first >> req.second;
        served += process_request(available, req);
    }
    cout << served;
}
