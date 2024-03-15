class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m + n;
        vector <int> temp = nums1;
        for (int i = m; i < size; i++){
            temp[i] = nums2[i-m];
        }
        sort(temp.begin(),temp.end());
        nums1 = temp;
    }
};