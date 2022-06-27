#include<stdio.h>
#include<iostream>

using namespace std;

void sort(int N, int ID[], double Rate[]) {
	
	for (int i = 1; i < N; i++) {
		double CurrentRate = Rate[i];
		int j = i;
		while(CurrentRate > Rate[j - 1] && j - 1 >= 0) {
			int TempID; double TempRate;
            j--;
			int k = j + 1;
			TempID = ID[k]; TempRate = Rate[k];
			ID[k] = ID[j]; ID[j] = TempID;
			Rate[k] = Rate[j]; Rate[j] = TempRate;
		}
	}
	
}

int main() {
    int n = 0, ID[100] { 0 };
    double p = 0.0, Level[100] { 0.0 };

    scanf("%d %lf", &n, &p);

    for (int i = 0; i < n; i++) {
        scanf("%d %lf", &ID[i], &Level[i]);
    }

    sort(n, ID, Level);

    bool flag = 1;

    for (int i = 0; i < n; i++) {
        if (Level[i] < p) {
            break;
        } else {
            flag = 0;
            printf("%03d %0.1f\n", ID[i], Level[i]);
        }
    }

    if (flag) {
        printf("None.\n");
    }

    return 0;
}