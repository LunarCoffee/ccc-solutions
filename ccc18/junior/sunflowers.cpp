#include <bits/stdc++.h>

using namespace std;

int n;

inline void rotate(vector<vector<int>> &mat, int t) {
    vector<vector<int>> new_mat(n, vector<int>(n));
    for (; t > 0; --t) {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                new_mat[j][n - i - 1] = mat[i][j];
        mat = new_mat;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> mat[i][j];
    
    int m = min(min(mat[0][0], mat[0][n - 1]), min(mat[n - 1][0], mat[n - 1][n - 1]));
    if (m == mat[0][n - 1]) rotate(mat, 3);
    else if (m == mat[n - 1][0]) rotate(mat, 1);
    else if (m == mat[n - 1][n - 1]) rotate(mat, 2);
    
    for (auto row : mat) {
        for (auto i : row)
            cout << i << " ";
        cout << "\n";
    }
}
