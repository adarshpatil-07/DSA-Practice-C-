// smart cab fare 
#include <iostream>
using namespace std;

int main() {
    int distance, time;
    float fare;

    cin >> distance;
    cin >> time;

    if (distance <= 3) {
        fare = 50;
    }
    else if (distance <= 10) {
        fare = 50 + (distance - 3) * 10;
    }
    else {
        fare = 50 + (7 * 10) + (distance - 10) * 15;
    }

    if (time >= 22 || time < 6) {
        fare = fare + (fare * 0.20);
    }

    cout << "Final Fare: " << fare;

    return 0;
}