class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.empty()){
            return {};
        }

        int row=intervals.size();
        int col=intervals[0].size();

        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);

        for(int i=0; i<row ;i++){

            if(intervals[i][0]<=ans.back()[1]){
                ans.back()[1]=max(intervals[i][1],ans.back()[1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};