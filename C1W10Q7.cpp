#include <iostream>
using namespace std;
int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int temp;
        for (int i = 0; i < (n / 2) + 1; i++) {
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
        if (n % 2 == 0) {
            cout << (a[n / 2] + a[(n / 2) - 1]) / 2 << endl;
        } else {
            cout << a[n / 2] << endl;
        }
    }
    return 0;
}