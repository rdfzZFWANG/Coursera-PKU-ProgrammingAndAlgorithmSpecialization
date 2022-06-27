#include <iostream>
using namespace std;
int main() {
    int n;
    double d, byBike, onFoot;
    cin >> n;
    while (n--) {
        cin >> d;
        byBike = 50 + d / 3; onFoot = d / 1.2;
        if (byBike == onFoot) {
            cout << "All";
        } else {
            if (byBike < onFoot) {
                cout<< "Bike";
            } else {
                cout<< "Walk";
            }
        }
        if (n != 0) {
            cout << endl;
        }
    }
    return 0;
}