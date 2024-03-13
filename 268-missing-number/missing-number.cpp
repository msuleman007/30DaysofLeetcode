class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = (nums.size()*(nums.size()+1))/2;
        int realSum = 0;
        for (int i = 0; i < nums.size();i++){
            realSum += nums[i];
        }
        return sum - realSum;
    }
};