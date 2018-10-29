#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int temp;
    vector<int> dists(4);
    
    for (int i = 0; i < 4; ++i) {
        cin >> temp;
        dists[i] = temp;
    }
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            temp = 0;
            for (int k = 0; k < abs(j - i); ++k) {
                temp += dists[min(i, j) + k];
            }
            cout << temp << " ";
        }
        cout << "\n";
    }
}
