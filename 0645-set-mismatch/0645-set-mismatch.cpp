class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         vector<int>a(nums.size()+1,0);

        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        vector<int>ans(2,0);
        for(int i=1;i<=nums.size();i++){
            if(a[i]==0){
                ans[1]=i;
            }
            if(a[i]==2){
                ans[0]=i;
            }
        }
        return ans;
    }
};