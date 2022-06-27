#include <iostream>
using namespace std;
int main() {
    int a, b;
    char oper[10];
    cin >> a >> b >> oper;
    if (oper[1] != '\0' || (oper[0] != '+' && oper[0] != '-' && oper[0] != '*' && oper[0] != '/')) {
        cout << "Invalid operator!";
    } else if (oper[0] == '+') {
        cout << a + b;
    } else if (oper[0] == '-') {
        cout << a - b;
    } else if (oper[0] == '*') {
        cout << a * b;
    } else if (oper[0] == '/') {
        if (b == 0) {
            cout << "Divided by zero!";
        } else {
            cout << a / b;
        }
    } else {
        cout << oper;
        cout << "Invalid operator!";
    }
    cin >> a;
    return 0;
}