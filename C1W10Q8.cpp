#include <iostream>
using namespace std;
int main() {
    int L, M, count;
    cin >> L >> M;
    L += 1;
    bool a[L];
    count = 0;
    for (int i = 0; i < L; i++) {
        a[i] = true;
    }
    for (int i = 0; i < M; i++) {
        int ml, mu;
        cin >> ml >> mu;
        for (int j = ml; j <= mu; j++) {
            a[j] = false;
        }
    }
    for (int i = 0; i < L; i++) {
        if (a[i] == true) count++;
    }
    cout << count;
    return 0;
}