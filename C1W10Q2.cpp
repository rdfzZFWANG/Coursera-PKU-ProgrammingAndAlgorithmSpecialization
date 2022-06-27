#include <iostream>
using namespace std;
int main() {
    char s1[80], s2[80];
    cin.getline(s1, 80); cin.getline(s2, 80);
    int i = 0;
    for (int j = 0; s1[j] != '\0'; j++) if (s1[j] > 96) s1[j] -= 32;
    for (int j = 0; s2[j] != '\0'; j++) if (s2[j] > 96) s2[j] -= 32;
    while (s1[i] != '\0' && (s1[i] == s2[i])) {
        i++;
    }
    if (s1[i] > s2[i]) {
        cout << '>';
    } else if (s1[i] < s2[i]) {
        cout << '<';
    } else {
        cout << '=';
    }
    cin >> i;
    return 0;
}