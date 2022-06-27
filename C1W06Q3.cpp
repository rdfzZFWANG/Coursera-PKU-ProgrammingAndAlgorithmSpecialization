#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int h, r, ans;
    double v;
    cin >> h >> r;
    v = (double) 3.14159 * r * r * h;
    ans = (ceil(20000 / v));
    cout << ans;
    return 0;
}