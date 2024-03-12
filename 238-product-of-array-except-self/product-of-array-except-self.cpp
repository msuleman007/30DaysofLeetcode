class Solution {
public:
    vector<int> productExceptSelf(const vector<int>& nums) {
        vector<int> leftx(nums.size());
        vector<int> rightx(nums.size());

        leftx[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            leftx[i] = leftx[i - 1] * nums[i - 1];
        }

        rightx[nums.size() - 1] = 1;
        for (int i = nums.size() - 2; i > -1; i--) {
            rightx[i] = rightx[i + 1] * nums[i + 1];
        }

        vector<int> out(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            out[i] = leftx[i] * rightx[i];
        }

        return out;
    }
};