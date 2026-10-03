#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string rev = s;
    reverse(rev.begin(), rev.end());

    if (rev == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}   