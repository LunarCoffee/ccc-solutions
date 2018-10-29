#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef pair<int, int> point;

void tick(char, int);

static vector<point> points;
static int xc = 0;
static int yc = -1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string temp = "d2r3d2r2u2r2d4l8u2";
    for (uint i = 0; i < temp.length(); i += 2) {
        tick(temp[i], temp[i + 1] - '0');
    }
    
    string input;
    while (getline(cin, input) && input[0] != 'q') {
        tick(input[0], stoi(input.substr(2)));
        cout << xc << " " << yc << " safe\n";
    }
}

void tick(char dir, int dist) {
    int xd = 0;
    int yd = 0;
    int xyw = -1;
    
    switch (dir) {
        case 'u': yd = 1; xyw = 0; break;
        case 'r': xd = 1; xyw = 1; break;
        case 'd': yd = -1; xyw = 0; break;
        case 'l': xd = -1; xyw = 1; break;
    }
    
    for (int i = 0; i < dist; ++i) {
        points.emplace_back(make_pair(xc, yc));
        xc += xd;
        yc += yd;
        
        if (find(points.begin(), points.end(), make_pair(xc, yc)) != points.end()) {
            cout << xc + ((xyw == 1) ? xd * (dist - i - 1) : 0) << " "
                << yc + ((xyw == 0) ? yd * (dist - i - 1) : 0) << " DANGER";
            exit(EXIT_SUCCESS);
        }
    }
}
