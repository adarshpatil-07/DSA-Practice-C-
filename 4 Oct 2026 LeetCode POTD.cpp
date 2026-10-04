#include <bits/stdc++.h>
using namespace std;
/*
LeetCode 678: Valid Parenthesis String 

LeetCode: 678
Difficulty: Medium */

// Solution :

class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;

        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            }
            else if (c == ')') {
                low--;
                high--;
            }
            else { // '*'
                low--;
                high++;
            }

            if (high < 0)
                return false;

            if (low < 0)
                low = 0;
        }

        return low == 0;
    }
};