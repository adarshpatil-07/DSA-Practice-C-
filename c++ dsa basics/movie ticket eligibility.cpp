// Movie ticket eligibility 
#include <iostream>
using namespace std;

int main() {
    int age;
    
    cin >> age;

    if (age < 5) {
        cout << "Free Ticket";
    }
    else if (age <= 17) {
        cout << "Child Ticket";
    }
    else {
        cout << "Adult Ticket";
    }

    return 0;
}