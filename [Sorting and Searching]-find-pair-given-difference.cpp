// https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int left = 0, right = 1;
        
        while (left < n && right < n) {
            int diff = arr[right] - arr[left];     
            if (diff == x && left != right) {
                return 1;
            } else if (diff < x) {
                right++;
            } else {
                left++;
            }
        } 
        return -1;
    }
};