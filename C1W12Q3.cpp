#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    double a[n][2], max;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (flag == true) {
                max = pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2);
                flag = false;
            } else {
                double temp = pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2);
                if (temp > max) {
                    max = temp;
                }
            }
        }
    }
    cout << setprecision(6) << sqrt(max);
    cin >> n;
    cin >> n;
    return 0;
}