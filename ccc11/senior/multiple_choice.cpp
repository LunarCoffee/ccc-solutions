#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, c{0};
    cin >> l;

    char res[l], ans[l];

    for (int i = 0; i < l; ++i) {
        cin >> res[i];
    }
    for (int i = 0; i < l; ++i) {
        cin >> ans[i];
    }
    
    for (int i = 0; i < l; ++i) {
        if (ans[i] == res[i]) {
            ++c;
        }
    }
    cout << c;
}
