#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sumn = 0, sumd = 1;
    int a, b, c, gcd, d, e;
    while (n--) {
        int num, deno;
        char slash;
        cin >> num >> slash >> deno;
        a = sumd; b = deno; c;
        while (a != 0) {
            c = a; a = b % a; b = c;
        }
        gcd = b;
        d = sumd / gcd;
        e = deno / gcd;
        sumn = sumn * e + num * d;
        sumd = gcd * d * e;
        a = sumd; b = sumn; c;
        while (a != 0) {
            c = a; a = b % a; b = c;
        }
        gcd = b;
        sumd /= gcd;
        sumn /= gcd;
    }
    if (sumd > 1) 
        cout << sumn << '/' << sumd << endl;
    else 
        cout << sumn << endl;
    cin >> n;
    return 0;
}