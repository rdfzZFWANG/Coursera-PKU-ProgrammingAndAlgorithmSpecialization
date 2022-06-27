#include <iostream>
using namespace std;
int main() {
    char max[500];
    char str[500];
    int lenM, lenS;
    bool flag = false;
    lenM = 0; lenS = 0;
    while (true) {
        cin >> str;
        for (lenS = 0; str[lenS] != '\0'; lenS++);
        if (str[lenS - 1] == '.') {
            flag = true;
            str[lenS - 1] = '\0';
            lenS -= 1;
        }
        if (lenS > lenM) {
            lenM = lenS;
            for (lenS = 0; str[lenS] != '\0'; lenS++) max[lenS] = str[lenS];
            max[lenS] = '\0';
        }
        if (flag) break;
    }
    for (int i = 0; max[i] != '\0'; i++) cout << max[i];
    cin >> lenM;
    return 0;
}