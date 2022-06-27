#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, temp;
    int c0, c1, c2, c3;
    cin >> n;
    c0 = 0; c1 = 0; c2 = 0; c3 = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp < 19) c0++;
        else if (temp > 18 && temp < 36) c1++;
        else if (temp > 35 && temp < 61) c2++;
        else if (temp > 60) c3++;
    }
    cout << "1-18: " << fixed << setprecision(2) << (double) 100 * c0 / n << '%' << endl;
    cout << "19-35: " << fixed << setprecision(2) << (double) 100 * c1 / n << '%' << endl;
    cout << "36-60: " << fixed << setprecision(2) << (double) 100 * c2 / n << '%' << endl;
    cout << "60-: " << fixed << setprecision(2) << (double) 100 * c3 / n << '%';
    return 0;
}