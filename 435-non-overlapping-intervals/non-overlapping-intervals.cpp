class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()) return 0;
        sort(intervals.begin(), intervals.end(),
             [](const vector  <int>& a, const vector <int> & b) {
                 return a[0] < b[0];
             });

        int minNum = 0;
        int lastEnd = intervals[0][1]; 
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < lastEnd) {
                minNum++;
                lastEnd = min(lastEnd, intervals[i][1]);
            } else {
                lastEnd = intervals[i][1];
            }
        }
        return minNum;
    }
};