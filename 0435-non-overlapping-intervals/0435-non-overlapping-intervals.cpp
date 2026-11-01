class Solution {
private:
    static bool comparater(vector<int> &val1 , vector<int>&val2){
        return val1[1] < val2[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end() , comparater);
        int limit = intervals[0][1];
        int count = 1;
        for(int i = 1 ; i<intervals.size() ; i++){
            if(intervals[i][0] >= limit){
                limit = intervals[i][1];
                count++;
            }
        }
        return intervals.size()-count;
    }
};