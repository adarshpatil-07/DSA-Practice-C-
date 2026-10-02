#include <bits/stdc++.h>
using namespace std;
/*
22. Generate Parentheses - Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
LeetCode: 22
Difficulty: Medium
Topic: Backtracking

Approach:
Generate the parentheses combinations recursively.

- Add '(' while open < n.
- Add ')' while close < open.
- Store the string when its length reaches 2 * n.

Time Complexity: O(4^n / sqrt(n))
Space Complexity: O(4^n / sqrt(n))
*/

// solution:

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;

        function<void(string, int, int)> backtrack =
            [&](string current, int open, int close) {

                if (current.length() == 2 * n) {
                    result.push_back(current);
                    return;
                }

                if (open < n) {
                    backtrack(current + "(", open + 1, close);
                }

                if (close < open) {
                    backtrack(current + ")", open, close + 1);
                }
            };

        backtrack("", 0, 0);

        return result;
    }
};