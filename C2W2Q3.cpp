#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
	const int PN = 3,TN = 3; 
	float P[PN], T[TN];
	for (int i = 0; i< PN; i++) {
		P[i] = 0;	
	};
	for (int i = 0; i< TN; i++) {
		T[i] = 0;	
	};
	
	for (int i = 0; i< PN; i++) {
		int ID, N;
		scanf("%d %d ", &ID, &N);
		
		for (int j = 0; j < N; j++) {
			char Type; float Amount;
			cin >> Type >> Amount;
			T[Type - 65] += Amount;
			P[ID - 1] += Amount;
		};
			
	};
	
	for (int i = 0; i< PN; i) {
		printf("%d %.2f\n", ++i,P[i]);
	};
	for (int i = 0; i< TN; i++) {
		printf("%c %.2f\n", char(65 + i),T[i]);	
	};
};