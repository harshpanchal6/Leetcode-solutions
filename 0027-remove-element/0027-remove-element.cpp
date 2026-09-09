class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        
        int s=0,e=n-1;
        int count=0;
        while(s<=e){
            if(nums[s]==val && nums[e]!=val ){
                swap(nums[s],nums[e]);
                count++;
                s++;
                e--;
            }
            else if(nums[s]!=val){
                s++;
            }
            else if(nums[e]==val){
                count++;
                e--;
            }
        }
        return n-count;
    }
};