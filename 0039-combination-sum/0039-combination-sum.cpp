class Solution {
private:
    void genrate(int ind , vector<vector<int>>&ans , vector<int>&list , vector<int>& candidates , int n , int target){
        if(target == 0){
            ans.push_back(list);
            return ;
        }
        if(target < 0 || ind >= n){
            return ;
        } 
        list.push_back(candidates[ind]);
        genrate(ind , ans , list , candidates , n , target-candidates[ind]);
        list.pop_back();
        genrate(ind+1 , ans , list , candidates , n ,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>list;
        genrate(0 , ans , list , candidates , candidates.size() , target);
        return ans;
    }
};