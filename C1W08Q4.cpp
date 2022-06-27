#include <iostream>
using namespace std;
int main() {
    int N, k;
    while (cin >> N >> k) {
        int year = 1;
        double currentN = 0;
        double currentP = 200;
        for (;;) {
            currentN += N;
            if (currentN >= currentP) {
                cout << year << endl;
                break;
            } else {
                if (year >= 20) {
                    cout << "Impossible" << endl;
                    break;
                } else {
                    currentP = currentP * (100 + k) / 100;
                    year++;
                }
            }   
        }
    }
    return 0;
}