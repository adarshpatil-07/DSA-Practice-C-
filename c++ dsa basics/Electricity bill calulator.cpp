// Electricity bill calulator
#include <iostream>
using namespace std;

int main() {
    int units, bill;

    cin >> units;

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    cout << "Electricity Bill: " << bill;

    return 0;
}