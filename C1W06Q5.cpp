#include <iostream>
using namespace std;
int main() {
    int maxO, minE, temp;
    bool flagO = true, flagE = true;
    for (int i = 0; i < 6; i++) {
        cin >> temp;
        if (temp % 2 == 0) {
            if (flagE) {
                minE = temp;
                flagE = false;
            } else {
                if (temp < minE) {
                    minE = temp;
                }
            }
        } else {
            if (flagO) {
                maxO = temp;
                flagO = false;
            } else {
                if (temp > maxO) {
                    maxO = temp;
                }
            }
        }
    }
    if ((maxO - minE) < 0) 
        cout << -(maxO - minE);
    else 
        cout << maxO - minE;
    return 0;
}