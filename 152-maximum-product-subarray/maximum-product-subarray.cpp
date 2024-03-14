class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n  = nums.size();
        int prodMax = INT_MIN;
        int left = 1;
        int right = 1;

        for (int i = 0; i < n;i++){
            left = (left == 0) ? 1 : left;
            right = (right == 0) ? 1: right;

            left *= nums[i];
            right *= nums[n-1-i];
            prodMax = max(prodMax,max(left,right));
        }
        return prodMax;
    }
};