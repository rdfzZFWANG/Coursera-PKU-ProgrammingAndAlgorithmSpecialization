#include<stdio.h>

using namespace std;

int main() {
    
    int k = 0;

    scanf("%d\n", &k);

    while (k--) {

        int m = 0, n = 0, ans = 0, temp = 0;
        scanf("%d %d\n", &m, &n);

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {

                if (i == 0 || j == 0 || i == m - 1 || j == n - 1) {
                    scanf("%d", &temp);
                    ans += temp;
                } else {
                    scanf("%d", &temp);
                }
                
            }
        
        }
    
        printf("%d\n", ans);
    }

    return 0;
}