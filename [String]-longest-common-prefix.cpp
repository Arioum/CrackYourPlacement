// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int s = strs.size();
        string n = strs[0], m = strs[s - 1], prefix = "";

        for (int i = 0; i < n.size(); i++) {
            if (n[i] == m[i]) {
                prefix += n[i];
            } else
                break;
        }
        return prefix;
    }
};