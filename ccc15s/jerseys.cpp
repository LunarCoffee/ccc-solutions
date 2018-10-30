#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <unordered_map>

using namespace std;

typedef pair<char, int> request;

int process_request(vector<char> &available, request req) {
    static unordered_map<char, int> sizes{{'S', 0}, {'M', 1}, {'L', 2}};
    int pos = req.second - 1;
    
    if (available[pos] != ' ' && sizes[available[pos]] >= sizes[req.first]) {
        available[pos] = ' ';
        return 1;
    }
    return 0;
}

int main() {
    int j, a;
    cin >> j >> a;
    
    vector<char> available(j);
    for (int i = 0; i < j; ++i) {
        cin >> available[i];
    }
    
    int served = 0;
    for (int i = 0; i < a; ++i) {
        pair<char, int> req;
        cin >> req.first >> req.second;
        served += process_request(available, req);
    }
    cout << served;
}
