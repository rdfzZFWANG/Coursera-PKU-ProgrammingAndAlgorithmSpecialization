#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;

    int count[26] {0}, length = 0;
    cin >> str;
    length = str.length();

    for (int i = 0; i < length; i++) {
        char c = str[i];
        if (c > 64 && c < 91) {
            count[c - 65]++;
        } else if (c > 96 && c < 123) {
            count[c - 97]++;
        } else {
            continue;
        }

    }

    int first = 0, second = 0;
    for (int i = 0; i < 26; i++) {
        int current = count[i];
        if (current > second) {
            if (current > first) {
                second = first;
                first = current;
            } else if (current < first) {
                second = current;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        char c = str[i];
        if (c > 64 && c < 91) {
            if (count[c - 65] == second) {
                cout << c << '+' << char(c + 32) << ':' << second << endl;
                break;
            }
        } else if (c > 96 && c < 123) {
            if (count[c - 97] == second) {
                cout << char(c - 32) << '+' << c << ':' << second << endl;
                break;
            }
        } else {
            continue;
        }
    }

    return 0;
}