#include <bits/stdc++.h>
#include <vector>
using namespace std ;
/*
LeetCode 2897: Apply Operations on Array to Maximize sum of Squares.

LeetCode: 2897
Difficulty: Hard */

// Solution :
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const int MOD = 1'000'000'007;
        vector<int> bits(31, 0);

        // Count set bits at each position
        for (int num : nums) {
            for (int i = 0; i < 31; i++) {
                if ((num >> i) & 1) {
                    bits[i]++;
                }
            }
        }

        long long ans = 0;

        // Construct k maximum numbers
        for (int i = 0; i < k; i++) {
            long long num = 0;

            for (int j = 0; j < 31; j++) {
                if (bits[j] > 0) {
                    num |= (1LL << j);
                    bits[j]--;
                }
            }

            ans = (ans + num * num) % MOD;
        }

        return ans;
    }
};
