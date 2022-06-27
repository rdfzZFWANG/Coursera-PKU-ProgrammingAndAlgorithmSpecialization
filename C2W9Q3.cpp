#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;

    scanf("%d,%d,%d", &a, &b, &c);

    if (a + b == c) {
        cout << '+' << endl;
    } else if (a - b == c) {
        cout << '-' << endl;
    } else if (a * b == c) {
        cout << '*' << endl;
    } else if (a / b == c) {
        cout << '/' << endl;
    } else if (a % b == c) {
        cout << '%' << endl;
    } else {
        cout << "error" << endl;
    }

    return 0;
}