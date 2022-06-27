#include<stdio.h>

using namespace std;

int main() {

    int m = 0, n = 0;
    scanf("%d %d\n", &m, &n);
    int M[120][120] {0};

    for (int i = 0; i < m; i++) {

        for (int j = 0; j < n; j++) {

            scanf("%d", &M[i][j]);
            
        }
    
    }

    for (int i = 0, j = 0; j < n - 1; j++ ) {
        for (int k = 0; k < j + 1; k++) {
            if (i + k < m && j - k >= 0) {
                printf("%d\n", M[i + k][j - k]);
            } else {
                break;
            }
        }
    }
    for (int i = 0, j = n - 1; i < m; i++ ) {
        for (int k = 0; k < m - i; k++) {
            if (i + k < m && j - k >= 0) {
                printf("%d\n", M[i + k][j - k]);
            } else {
                break;
            }
        }
    }

    return 0;
}