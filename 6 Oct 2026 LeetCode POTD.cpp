#include <bits/stdc++.h>
using namespace std;
/*
LeetCode 921: Mininum Add to Make Parentheses Valid

LeetCode: 921
Difficulty: Medium */

// Solution :
class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int add = 0;

        for (char c : s) {
            if (c == '(') {
                open++;
            } 
            else {
                if (open > 0)
                    open--;
                else
                    add++;
            }
        }

        return add + open;
    }
};