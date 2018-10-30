#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> ivec;

static uint n;

void rotate(vector<ivec> &mat) {
    vector<ivec> new_mat(n, ivec(n));
    
    for (uint i = 0; i < n; ++i) {
        for (uint j = 0; j < n; ++j) {
            new_mat[j][n - i - 1] = mat[i][j];
        }
    }
    
    mat = new_mat;
}

bool isOriginal(vector<ivec> mat) {
    for (uint i = 0; i < n - 1; ++i) {
        if (mat[i + 1][0] < mat[i][0]) {
            return false;
        }
        
        for (uint j = 0; j < n - 1; ++j) {
            if (mat[i][j + 1] < mat[i][j]) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    vector<ivec> mat(n, ivec(n));
    
    for (uint i = 0; i < n; ++i) {
        for (uint j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            
            mat[i][j] = temp;
        }
    }
    
    while (!isOriginal(mat)) {
        rotate(mat);
    }
    
    for (auto row : mat) {
        for (auto i : row) {
            cout << i << " ";
        }
        cout << endl;
    }
}
