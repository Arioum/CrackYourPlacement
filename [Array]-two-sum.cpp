// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            int num1 = nums[i];
            int num2 = target - num1;
            if (mpp.find(num2) != mpp.end()) {
                return {mpp[num2], i};
            }
            mpp[num1] = i;
        }
        return {-1, -1};
    }
};