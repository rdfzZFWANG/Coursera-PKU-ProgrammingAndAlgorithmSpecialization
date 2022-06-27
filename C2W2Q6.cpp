#include<stdio.h>

using namespace std;

int main() {
	int N, M, Dorm[105][105], Count = 0;
	
	scanf("%d\n", &N);
	for (int i = 0; i < 105; i++) {
		for (int j = 0; j < N + 2; j++) {
			
			Dorm[i][j] = 0;
			
		}
	
	}
	
	for (int i = 1; i < N + 1; i++) {
		
		for (int j = 1; j < N + 1; j++) {
			
			char TempChar;
			scanf(" %c", &TempChar);
			if (TempChar == '#') {
				Dorm[i][j] = 0;
			} else if (TempChar == '.') {
				Dorm[i][j] = 1;
			} else {
				Count++;
				Dorm[i][j] = 2;
			}
			
		}
		
	}
	
	scanf("%d", &M);

	for (int k = 0; k < M - 1; k++) {
		for (int i = 0; i < N + 1; i++) {
			
			for (int j = 0; j < N + 1; j++) {

				if (Dorm[i][j] == 2) {
					if (Dorm[i + 1][j] == 1 ) {
						Dorm[i + 1][j] = 3;
					}
					if (Dorm[i - 1][j] == 1 ) {
						Dorm[i - 1][j] = 3;
					}
					if (Dorm[i][j + 1] == 1 ) {
						Dorm[i][j + 1] = 3;
					}
					if (Dorm[i][j - 1] == 1 ) {
						Dorm[i][j - 1] = 3;
					}
				}
				
			}
		}
		
		for (int i = 0; i < N + 2; i++) {
			for (int j = 0; j < N + 2; j++) {
				if (Dorm[i][j] == 3) {
					Dorm[i][j] = 2;
					Count++;
				}
				
			}
		
		}
		
	}
	
	printf("%d\n", Count);
	
	
}