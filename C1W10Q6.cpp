#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = m; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) cout << ' ';
    }
    return 0;
}