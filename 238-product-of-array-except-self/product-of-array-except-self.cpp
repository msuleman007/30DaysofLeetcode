class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> out(nums.size(),1);
        int leftx = 1;
        int rightx = 1;

        for (int i = 0;i < nums.size();i++){
            out[i] *= leftx;
            leftx *= nums[i];
        }

        for (int i = (nums.size()-1);i >= 0;--i){
            out[i]*=rightx;
            rightx *= nums[i];
        }
        return out;
    }
};