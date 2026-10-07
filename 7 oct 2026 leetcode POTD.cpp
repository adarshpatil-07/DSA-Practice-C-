#include <bits/stdc++.h>
using namespace std;
/*
LeetCode 301: Remove Invalid Parentheses 

LeetCode: 301
Difficulty: Hard */

// Solution :
class Solution {
public:
    vector<string> ans;
    int n;

    void dfs(string &s, int idx, int leftRem, int rightRem,
             int balance, string &cur) {

        // Invalid prefix
        if (balance < 0)
            return;

        // Not enough characters left to remove
        if (n - idx < leftRem + rightRem)
            return;

        // End of string
        if (idx == n) {
            if (leftRem == 0 && rightRem == 0 && balance == 0)
                ans.push_back(cur);
            return;
        }

        char c = s[idx];

        // Remove current character
        if (c == '(' && leftRem > 0) {
            dfs(s, idx + 1, leftRem - 1, rightRem,
                balance, cur);
        }

        if (c == ')' && rightRem > 0) {
            dfs(s, idx + 1, leftRem, rightRem - 1,
                balance, cur);
        }

        // Keep current character
        if (c == '(') {
            cur.push_back(c);

            dfs(s, idx + 1, leftRem, rightRem,
                balance + 1, cur);

            cur.pop_back();
        }
        else if (c == ')') {
            if (balance > 0) {
                cur.push_back(c);

                dfs(s, idx + 1, leftRem, rightRem,
                    balance - 1, cur);

                cur.pop_back();
            }
        }
        else {
            // Letter
            cur.push_back(c);

            dfs(s, idx + 1, leftRem, rightRem,
                balance, cur);

            cur.pop_back();
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        n = s.size();

        int leftRem = 0;
        int rightRem = 0;

        // Calculate the exact number of parentheses
        // that must be removed.
        for (char c : s) {

            if (c == '(') {
                leftRem++;
            }
            else if (c == ')') {

                if (leftRem > 0)
                    leftRem--;
                else
                    rightRem++;
            }
        }

        string cur;

        dfs(s, 0, leftRem, rightRem, 0, cur);

        // Remove duplicate answers
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};