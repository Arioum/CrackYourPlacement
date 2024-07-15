// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0);

        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        for (int j = 1; j <= n; j++) {
            if (hash[j] > 1) {
                return j;
            }
        }

        return 0;
    }
};