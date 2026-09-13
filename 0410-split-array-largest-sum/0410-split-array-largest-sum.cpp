class Solution {
private: 
    int countofsplit(vector<int>&nums , int  mid){
        int last = 0;
        int count = 1;

        for(int i = 0; i < nums.size(); i++){
            if(last+nums[i] <= mid){
                last += nums[i];
            }
            else{
                count++;
                last = nums[i];
            }
        }
        return count;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n){
            return -1;
        }
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high){
            int mid = low+(high-low)/2;
            int split = countofsplit(nums , mid);
            if(split > k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};