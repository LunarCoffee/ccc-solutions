#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int j;
    cin >> j;
    
    int combos = 0;
    for (int i = 0; i < j - 3; ++i) {
        for (int k = i + 1; k < j - 2; ++k) {
            for (int l = k + 1; l < j - 1; ++l) {
                ++combos;
            }
        }
    }
    cout << combos;
}
