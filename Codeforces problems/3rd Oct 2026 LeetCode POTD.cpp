#include <bits/stdc++.h>
using namespace std;
/*
32.Longest valid parentheses - Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

LeetCode: 32
Difficulty: Hard */

// Solution : 
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                st.push(i);
            }
            else {
                st.pop();

                if (st.empty()) {
                    st.push(i);
                }
                else {
                    ans = max(ans, i - st.top());
                }
            }
        }

        return ans;
    }
};