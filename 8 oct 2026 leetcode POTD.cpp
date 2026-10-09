#include <bits/stdc++.h>
using namespace std ;
/*
LeetCode 1021: Remove outermost Parentheses 

LeetCode: 1021
Difficulty: Easy */

// Solution :
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int balance = 0;

        for (char c : s) {
            if (c == '(') {
                if (balance > 0)
                    ans += c;
                balance++;
            } 
            else {
                balance--;
                if (balance > 0)
                    ans += c;
            }
        }

        return ans;
    }
};