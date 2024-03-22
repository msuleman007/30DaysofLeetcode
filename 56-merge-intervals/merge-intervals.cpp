class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        
        vector<vector<int>> mergedIntervals;
        mergedIntervals.push_back(intervals[0]);
        
        for (int i = 1; i < intervals.size(); ++i) {
            vector<int>& current = intervals[i];
            vector<int>& last = mergedIntervals.back();
            
            if (current[0] <= last[1]) {
                last[1] = max(last[1], current[1]);
            } else {
                mergedIntervals.push_back(current);
            }
        }
        
        return mergedIntervals;
    }
};