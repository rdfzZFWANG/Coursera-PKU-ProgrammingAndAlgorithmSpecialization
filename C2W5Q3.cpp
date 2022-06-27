#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
    int n = 0, length = 0;
    bool first = 1;
    scanf("%d\n", &n);

    while (n--) {
        string word;
        cin >> word;
        if (first) {
            cout << word;
            length += word.length();
            first = false;
        } else {
            if (length + word.length() + 1 > 80) {
                cout << endl;
                cout << word;
                length = word.length();
                first = false;
            } else {
                cout << ' ' << word;
                length += word.length() + 1;
            }
        }

    }
    cout << endl;

}