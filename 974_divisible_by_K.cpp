// 974. Subarray Sums Divisible by K
// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

// A subarray is a contiguous part of an array.


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        int n = nums.size();
        int result = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];

            int remainder = sum % k;
            if (remainder < 0) {
                remainder += k;
            }

            if (mp.find(remainder) != mp.end()) {
                result += mp[remainder];
            }

            mp[remainder]++;
        }

        return result;
    }
};
