#include<stdio.h>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	string str;
	
	while (cin >> str) {
		vector<int> Index;
		vector<bool> Character;
		for (int i=0; i < str.length(); i++) {
			cout << str[i];
			if (str[i] == '(') {
				Index.push_back(i);
				Character.push_back(1);
			} else if (str[i] == ')') {
				if (Character.empty() || !Character.back() ) {
					Index.push_back(i);
					Character.push_back(0);
				} else {
					Index.pop_back();
					Character.pop_back();
				}
			}
		}
		cout << '\n';
		int wrong = 0;
		for (int i=0; i < str.length(); i++) {
			if (!Index.empty() && wrong < Index.size() && i == Index[wrong]) {
				if (str[i] == '(') {
					cout << '$';
				} else {
					cout << '?';
				}
			 	wrong++;
			} else {
				cout << ' ';
			}
		}
		cout << '\n';

	}
	
	
	return 0;
}