// https://leetcode.com/problems/sort-colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int min_idx;
        for (int i = 0; i < nums.size(); i++) {
            min_idx = i;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[min_idx]) {
                    min_idx = j;
                }
            }
            int temp = nums[min_idx];
            nums[min_idx] = nums[i];
            nums[i] = temp;
        }
    }
};