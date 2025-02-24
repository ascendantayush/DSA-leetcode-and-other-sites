// 189. Rotate Array
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // time complesxity of O(n^2)
        // int z = k % nums.size();
        // for (int i = 0; i < k; i++) {
        //     int f = nums.size() - 1;
        //     int temp_replace = nums[f];
        //     for (int i = nums.size() - 2; i >= 0; i--) {
        //         nums[i + 1] = nums[i];
        //     }

        //     nums[0] = temp_replace;

        //     for (int i = 0; i < nums.size(); i++) {
        //         cout << nums[i] << " ";
        //     }
        // }


        // O(n) approach                                                                                                                                    
        // const int z = k % nums.size();
        // vector<int> temp(z);

        // for (int i = 0; i < z; i++) {
        //     temp[i] = nums[nums.size() - z + i];
        // }

        // for (int i = nums.size() - 1; i >= z; i--) {
        //     nums[i] = nums[i - z];
        // }

        // for (int i = 0; i < z; i++) {
        //     nums[i] = temp[i];
        // }

        // for (int i = 0; i < nums.size(); i++) {
        //     cout << nums[i] << " ";
        // }

        //rversing array logic
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin() + (n-k),nums.end());
        reverse(nums.begin(),nums.end());

        for(int i = 0; i < nums.size() ;i++){
            cout << nums[i] << " ";
        }



    }
};
