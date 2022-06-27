#include <iostream>
using namespace std;
int main() {
    int n, max, temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > max) {
            max = temp;
        }
    }
    cout << max;
    return 0;
}