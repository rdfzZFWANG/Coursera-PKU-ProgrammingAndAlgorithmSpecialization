#include<stdio.h>

using namespace std;

int main() {
    int m = 0, n = 0;
    scanf("%d%d", &m, &n);
    int M[30][30] { -100 };

    for (int i = 1; i < m + 1; i++) {

        for (int j = 1; j < n + 1; j++) {

            scanf("%d", &M[i][j]);
            
        }
    
    }

    for (int i = 1; i < m + 1; i++) {

        for (int j = 1; j < n + 1; j++) {

            if (M[i][j] >= M[i - 1][j] && M[i][j] >= M[i + 1][j] && M[i][j] >= M[i][j + 1] && M[i][j] >= M[i][j - 1]) {
                printf("%d %d\n", i - 1, j - 1);
            }
            
        }
    
    }

    return 0;
}