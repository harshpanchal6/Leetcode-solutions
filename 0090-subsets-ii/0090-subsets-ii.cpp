class Solution {
private:
 void genratesubset(int ind , vector<int>&list , vector<vector<int>>&ans , vector<int>nums , int n){
        if(ind == n){
            ans.push_back(list);
            return ;
        }

        list.push_back(nums[ind]);
        genratesubset(ind+1 , list , ans , nums , n);
        list.pop_back();
        int num = nums[ind++];
        while(ind < n && nums[ind] == num)  ind++;
        genratesubset(ind , list , ans , nums , n);

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>list;
        sort(nums.begin(), nums.end());
        genratesubset(0 , list , ans , nums , nums.size());
        return ans;
    }
};