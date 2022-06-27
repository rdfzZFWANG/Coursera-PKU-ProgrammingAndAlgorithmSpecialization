#include<stdio.h>

using namespace std;

int Read(int Start, char LeftCharacter, bool IsFirst) {
	char Left;
	scanf("%c", &Left);
	
	if (Left == '\n') {
		return 0;
	}
	
	if (Left == LeftCharacter || IsFirst) {
		
		int i = Start + 1;
		
		while(1) {
			
			int Ret;
			if (IsFirst) {
				Ret = Read(i, Left, false);
			} else {
				Ret = Read(i, LeftCharacter, false);
			}

			if (Ret == 1) {
				printf("%d %d\n", Start, i);
				return i + 1 - Start;
			} else {
				i += Ret;
			}
			
		}
		
	} else {
		return 1;
	}
}

int main() {
	int Start = 0;
	while(1) {
		int temp = Read(Start, '1', true);
		if (temp == 0) {
			break;
		} else {
			Start += temp;
		}
	}
	return 0;
}