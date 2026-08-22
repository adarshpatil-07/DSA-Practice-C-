// Password Strength Analyzer
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string password;
    int count = 0;

    cin >> password;

    if (password.length() >= 8)
        count++;

    for (char ch : password) {
        if (isupper(ch)) {
            count++;
            break;
        }
    }

    for (char ch : password) {
        if (islower(ch)) {
            count++;
            break;
        }
    }

    for (char ch : password) {
        if (isdigit(ch)) {
            count++;
            break;
        }
    }

    if (count == 4)
        cout << "Strong";
    else if (count == 3)
        cout << "Medium";
    else
        cout << "Weak";

    return 0;
}