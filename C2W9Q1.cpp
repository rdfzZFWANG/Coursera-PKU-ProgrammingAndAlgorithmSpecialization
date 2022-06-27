#include<stdio.h>

using namespace std;

int main() {

    int m = 0, k = 0, n = 0, count = 0;

    scanf("%d%d", &m, &k);

    n = m;

    while (n > 0) {
        if (n % 10 == 3) {
            count++;
        }
        n /= 10;
    }

    if (m % 19 == 0 && count == k) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}