// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i < haystack.size(); i++) {
           if (needle == haystack.substr(i, needle.size())) {        
                return i;                                 
            }
        } 
        return -1;
    }
};