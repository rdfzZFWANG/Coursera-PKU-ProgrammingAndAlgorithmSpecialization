#include <iostream>
using namespace std;
int main() {
    int m, n, sumN, sumM, result = 0;
    cin >> m >> n;
    if (m % 2 == 0) m-- ;
    else m -= 2;
    if (n % 2 == 0) n--;
    sumM = ((1 + m) * (m / 2 + 1)) / 2;
    sumN = ((1 + n) * (n / 2 + 1)) / 2;
    cout << sumN - sumM;
    return 0;
}