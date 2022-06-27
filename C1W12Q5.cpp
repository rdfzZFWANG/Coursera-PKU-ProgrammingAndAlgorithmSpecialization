#include <iostream>
using namespace std;
int main() {
    char str[11], sub[4], max;
    while (cin >> str >> sub) {
        int p; bool flag = true;
        max = str[0]; p = 0;
        for (int i = 1; str[i] != '\0'; i++) {
            if (str[i] > max) {
                max = str[i];
                p = i;
            }
        }
        for (int i = 0; i < p + 1; i++) {
            cout << str[i];
        }
        for (int i = 0; sub[i] != '\0'; i++) {
            cout << sub[i];
        }
        for (int i = p + 1; str[i] != '\0'; i++) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}