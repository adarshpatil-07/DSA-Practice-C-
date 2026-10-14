#include <bits/stdc++.h>
#include <vector>
using namespace std ;
/*
LeetCode 3727: maximum-alternating-sum-of-squares.

LeetCode: 3727
Difficulty: Medium */

// Solution :
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squares;

        for (int x : nums) {
            squares.push_back(1LL * x * x);
        }

        sort(squares.begin(), squares.end());

        int n = squares.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (i < n / 2)
                ans -= squares[i];
            else
                ans += squares[i];
        }

        return ans;
    }
};
