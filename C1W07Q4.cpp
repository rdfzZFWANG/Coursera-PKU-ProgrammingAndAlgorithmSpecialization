#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (100 >= n && n >= 95) cout << 1;
    else if (95 > n && n >= 90) cout << 2;
    else if (90 > n && n >= 85) cout << 3;
    else if (85 > n && n >= 80) cout << 4;
    else if (80 > n && n >= 70) cout << 5;
    else if (70 > n && n >= 60) cout << 6;
    else cout << 7;
    return 0;
}