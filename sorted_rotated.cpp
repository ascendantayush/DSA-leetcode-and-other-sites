// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                count++;
            }
        }

        if (count == 0)
            return true;
        if (count > 1)
            return false;

        return (nums[nums.size() - 1] <= nums[0]);
    }
};