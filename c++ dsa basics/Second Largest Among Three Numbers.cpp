// Second Largest Among Three Numbers
#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    if ((A >= B && A <= C) || (A <= B && A >= C))
        cout << "Second Largest: " << A;
    else if ((B >= A && B <= C) || (B <= A && B >= C))
        cout << "Second Largest: " << B;
    else
        cout << "Second Largest: " << C;

    return 0;
}