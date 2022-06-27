#include<stdio.h>

using namespace std;

int main() {
    int N, I;
    int i = 0;
    scanf("%d\n", &N);
    while (i < N) {
        scanf("%d", &I);
        if (I == i) {
            printf("%d", I);
            break;
        };
        i++;
    };
    if (i == N) {
        printf("%c", 'N');
    };

    return 0;
};