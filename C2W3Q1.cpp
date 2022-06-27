#include<stdio.h>
#include<iostream>

using namespace std;

char Input[600] = { '\0' };

int Read(int i) {
	char This = Input[i];
	int Total = 0;
	if (This == ' ' || This == '\0' || This == '\n') {
		
		return 0;
		
	} else {
		Total++;
		Total += Read( i + 1 );
		printf("%c", This);
		return Total;
	}
}

int main() {
	
	cin.getline(Input, 550);
	
	int Start = 0;
	while (Input[Start] != '\0' && Input[Start] != '\n') {
		//printf("%d", Input[Start] == ' ');
		if (Input[Start] == ' ') {
			printf("%c", Input[Start]);
			Start++;
		} else {
			Start += Read(Start);
		}
	}
	
	return 0;
}