#include <bits/stdc++.h>
using namespace std;

int a = 0, b = 0;
vector<vector<string>> code;

void analyze(vector<string> expr) {
    int &c = expr[1] == "A" ? a : b;
    string s = expr[0];
    if (s == "2") {
        cout << c << "\n";
        return;
    }
    
    int &d = expr[2] == "A" ? a : b;
    if (s == "1")
        c = stoi(expr[2]);
    else if (s == "3")
        c += d;
    else if (s == "4")
        c *= d;
    else if (s == "5")
        c -= d;
    else c /= d;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        
    string temp, token;
    int c = 0;
    while (temp != "7") {
        code.emplace_back(vector<string>());
        getline(cin, temp);
        istringstream iss(temp);
        while (iss >> token)
            code[c].emplace_back(token);
        ++c;
    }
    
    code.pop_back();
    for (auto i : code)
        analyze(i);
}
