#include <iostream>
using namespace std;
int main() {
    int value;
    cin >> value;
    cout << value / 100 << endl << (value % 100) / 10 << endl << (value % 10);
    return 0;
}