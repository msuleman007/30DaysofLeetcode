class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int minNum = nums[0];
        int l = 0, r = n-1;
        while(l<=r){
            if (nums[l] < nums [r]){
                minNum = min (minNum,nums[l]);
                break;
            }

            int mid = (l+r)/2;
            minNum = min(nums[mid],minNum);
            if ( nums[l] <= nums[mid] ){
                l = mid +1;
            } else {
                r = mid - 1;
            }
        }
        return minNum;
    }
};