#include <iostream>
using namespace std;
int succedent[300];
int precedent[300];
int main() {
    int best;
    bool a, b, c, d;
    for (best = 1; best <= 4; best++) {
        a = (best == 2);
        b = (best == 4);
        c = !(best == 3);
        d = !b;
        if (a + b + c + d == 1) {
            break;
        }
    }
    cout << best << endl;
    if (a == 1) cout << 'A';
    else if (b == 1) cout << 'B';
    else if (c == 1) cout << 'C';
    else cout << 'D';
    cin >> best;
    return 0;
}