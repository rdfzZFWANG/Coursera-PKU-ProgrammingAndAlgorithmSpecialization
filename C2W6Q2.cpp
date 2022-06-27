#include<stdio.h>

using namespace std;

int main() {
    int n;

    scanf("%d\n", &n);

    char read;
        
    while (scanf("%c", &read)) {
        if (read == 'A') {
            printf("T");
        } else if (read == 'T') {
            printf("A");
        } else if (read == 'G') {
            printf("C");
        } else if (read == 'C') {
            printf("G");
        } else {
            if (!(--n)) {
                printf("\n");
                break;
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}