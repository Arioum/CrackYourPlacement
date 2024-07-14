// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        for (int i = 1, j = 0; i < n; i++) {
            if (nums[j] == 0 && nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            } else if (nums[j] != 0) {
                j++;
            }
        }
    }
};