// https://www.geeksforgeeks.org/problems/permutations-in-array1747/1

class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a,a+n, greater<int>());
        sort(b,b+n);
        
        for(int i=0;i<n;i++) {
            if(a[i]+b[i]<k) {
                return false;
            }
        }
        return true;
    }
};