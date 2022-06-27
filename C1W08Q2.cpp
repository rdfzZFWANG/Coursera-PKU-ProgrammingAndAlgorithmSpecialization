#include <iostream>
using namespace std;
int main() {
    int a[6], sum;
    sum = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
    for (int i = 1; i < 6; i++) {
        if (a[i] < a[0]) {
            sum += a[i];
        } else {
            continue;
        }
    }
    cout << sum;
    return 0;
}