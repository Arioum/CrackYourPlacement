// https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1

class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int>res;
        
        for(int i = 0; i < n; i++) {
            long long int product = 1;
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    product *= nums[j];
                }
            }
            res.push_back(product);
        }
        
        return res;
    }
};