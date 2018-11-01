#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int j;
    cin >> j;
    cout << ((j - 1) * (j - 2) * (j - 3)) / 6;
}
