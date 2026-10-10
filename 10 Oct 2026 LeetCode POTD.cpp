#include <bits/stdc++.h>
using namespace std ;
/*
LeetCode 2333: Minimum Sum of Squared Difference

LeetCode: 2333
Difficulty: Medium */

// Solution :
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2,
                               int k1, int k2) {
        vector<int> diff;
        long long sum = 0;
        int k = k1 + k2;

        for (int i = 0; i < nums1.size(); i++) {
            int d = abs(nums1[i] - nums2[i]);
            diff.push_back(d);
            sum += d;
        }

        if (sum <= k) return 0;

        int left = 0, right = 100000;

        while (left < right) {
            int mid = left + (right - left) / 2;
            long long needed = 0;

            for (int d : diff) {
                needed += max(0, d - mid);
            }

            if (needed <= k)
                right = mid;
            else
                left = mid + 1;
        }

        long long ans = 0;

        for (int& d : diff) {
            k -= max(0, d - left);
            d = min(d, left);
        }

        for (int& d : diff) {
            if (k == 0) break;

            if (d == left) {
                d--;
                k--;
            }
        }

        for (int d : diff) {
            ans += 1LL * d * d;
        }

        return ans;
    }
};
