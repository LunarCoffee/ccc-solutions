#include <iostream>

using namespace std;

int sumac_sequence(int sum, int a, int b) {
    return (a - b < 0) 
        ? sum 
        : sumac_sequence(++sum, b, a - b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    
    cout << sumac_sequence(2, a, b);
}
