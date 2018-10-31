#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers;
    for (; n > 0; --n) {
        int temp;
        cin >> temp;
        
        if (!temp) {
            numbers.erase(numbers.end() - 1);
        } else {
            numbers.emplace_back(temp);
        }
    }
    
    int sum = 0;
    for (auto number : numbers) {
        sum += number;
    }
    cout << sum;
}
