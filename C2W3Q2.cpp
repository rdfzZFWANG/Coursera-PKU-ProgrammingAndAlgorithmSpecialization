#include<stdio.h>

using namespace std;

void Process(int Number) {
	int Next;
	if (Number == 1) {
		printf("End\n");
	} else {
		if (Number % 2) {
			Next = Number * 3 + 1;
			printf("%d*3+1=%d\n", Number, Next );
			Process(Next);
		} else {
			Next = Number / 2;
			printf("%d/2=%d\n", Number, Next );
			Process(Next);
		}
	}
	
	
}

int main() {
	
	int Number;
	scanf("%d", &Number);
	
	Process(Number);
	
	return 0;
}