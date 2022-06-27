#include <iostream>
using namespace std;
int main() {
    int n, k, max, temp;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            } else {
                continue;
            }
        }
    }
    cout << a[k - 1];
    cin >> n;
    return 0;
}