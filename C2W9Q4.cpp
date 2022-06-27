#include<stdio.h>

using namespace std;

void sort(int N, int x[], int y[]) {
	
	for (int i = 1; i < N; i++) {
		int CurrentRate = x[i];
		int j = i;
		while(CurrentRate < x[j - 1] && j - 1 >= 0) {
			int TempID; int TempRate;
            j--;
			int k = j + 1;
			TempID = y[k]; TempRate = x[k];
			y[k] = y[j]; y[j] = TempID;
			x[k] = x[j]; x[j] = TempRate;
		}
	}
	
}

int main() {
    int n = 0, x[200]{0}, y[200]{0}, count = 0;
    bool isMax[200];

    scanf("%d", &n);

    count = n;

    for (int i = 0; i < n; i++) {
        isMax[i] = 1;
        scanf("%d%d", &x[i], &y[i]);
    }
    sort(n, y, x);
    sort(n, x, y);

    for (int i = 0; i < n; i++) {
        int temp_x = x[i], temp_y = y[i];
        if (isMax[i]) {
            for (int j = 0; j < n; j++) {
                if (x[j] <= temp_x && y[j] <= temp_y && i != j && isMax[j]) {
                    isMax[j] = 0;
                    count--;
                }
            }
        }
    }
    int tempCount = 0;
    for (int i = 0; i < n; i++) {

        if (isMax[i]) {
            if (tempCount++ < count - 1) {
                printf("(%d,%d),", x[i], y[i]);
            } else {
                printf("(%d,%d)\n", x[i], y[i]);
            }
        }
    }
    return 0;
}
