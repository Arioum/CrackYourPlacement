// https://leetcode.com/problems/find-all-duplicates-in-an-array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n+1,0);
        vector<int> res;

        for(int i=0;i<n;i++) {
            hash[nums[i]]++;
        }

        for(int i=1;i<=n;i++) {
            if(hash[i] > 1) {
                res.push_back(i);
            }
        }
        return res;
    }
};