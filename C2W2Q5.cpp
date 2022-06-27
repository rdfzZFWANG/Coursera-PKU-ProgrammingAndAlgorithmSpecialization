#include<stdio.h>

using namespace std;

void sort(int N, int ID[], float Rate[]) {
	
	
	for (int i = 1; i < N; i++) {
		float CurrentRate = Rate[i];
		int j = i;
		while(CurrentRate < Rate[--j]) {
			int TempID; float TempRate;
			int k = j + 1;
			TempID = ID[k]; TempRate = Rate[k];
			ID[k] = ID[j]; ID[j] = TempID;
			Rate[k] = Rate[j]; Rate[j] = TempRate;
		}
	}
	
}

int main() {
	int N, ID[100], Before, After;
	float Rate[100];
	scanf("%d\n", &N);
	
	for (int i = 0; i<N; i++) {
		scanf("%d %d %d", &ID[i], &Before, &After);
		Rate[i] = (float) After / Before;
	}
	
	sort(N, ID, Rate);
	int Diff = -1, Index = 0;
	for (int i = 1; i<N; i++) {
		int tempRate = Rate[i] - Rate[i - 1];
		if (Diff < tempRate) {
			Diff = tempRate;
			Index = i;
		}
	}
	
	printf("%d\n", N - Index);
	for (int i = Index; i<N; i++) {
		printf("%d\n", ID[i]);
	}
	
	printf("%d\n", Index);
	for (int i = 0; i<Index; i++) {
		printf("%d\n", ID[i]);
	}
	return 0;
}