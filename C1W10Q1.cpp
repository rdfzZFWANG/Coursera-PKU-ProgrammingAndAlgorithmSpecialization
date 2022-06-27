#include <iostream>
using namespace std;
int main() {
    char s[80];
    cin.getline(s, 80);
    int a, e, i, o, u;
    a = 0; e = 0; i = 0; o = 0; u = 0;
    for (int j = 0; s[j] != '\0'; j++) {
        if (s[j] == 'a') a++;
        else if (s[j] == 'e') e++;
        else if (s[j] == 'i') i++;
        else if (s[j] == 'o') o++;
        else if (s[j] == 'u') u++;
        else continue;
    }
    cout << a << ' ' << e << ' ' << i << ' ' << o << ' ' << u;
    cin >> a;
    return 0;
}