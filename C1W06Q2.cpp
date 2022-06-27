#include <iostream>
using namespace std;
int main() {
    int n, x, y, ans;
    cin >> n >> x >> y;
    if ( y % x == 0) 
        ans = n - (y / x) ;
    else 
        ans = n - (y / x) - 1;
    if (ans <= 0) 
        cout << 0;
    else 
        cout << ans;
    return 0;
}