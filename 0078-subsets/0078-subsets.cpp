class Solution {
private:
    void genratesubset(int ind , vector<int>&list , vector<vector<int>>&ans , vector<int>nums , int n){
        if(ind == n){
            ans.push_back(list);
            return ;
        }

        genratesubset(ind+1 , list , ans , nums , n);
        list.push_back(nums[ind]);
        genratesubset(ind+1 , list , ans , nums , n);
        list.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>list;
        genratesubset(0 , list , ans , nums , nums.size());
        return ans;
    }
};