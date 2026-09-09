class Solution {
private:
    int countingpair(vector<int>&nums,int low,int mid,int high){
       int  right=mid+1;

        int cnt=0;
        for(int i=low;i<=mid;i++){
            while(right<=high && (long long)nums[i] > 2LL * nums[right]){
                right++;
            }
            cnt+=(right-(mid+1));
        }
        return cnt;
    }
    
    void merge(vector<int>&nums,int low,int mid,int high){
        int l=low;
        int r=mid+1;

        vector<int>temp;

        while(l<=mid && r<=high){
            if(nums[l]<=nums[r]){
                temp.push_back(nums[l]);
                l++;
            }
            else{
                temp.push_back(nums[r]);
                r++;
            }
        }
        while(l<=mid){
            temp.push_back(nums[l]);
            l++;
        }
        while(r<=high){
            temp.push_back(nums[r]);
            r++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }
    int mergeshort(vector<int>&nums,int low,int high){
        if(low>=high){
            return 0;
        }    
        int mid=(low+high)/2;
        int cnt=0;
        cnt+=mergeshort(nums,low,mid);
        cnt+=mergeshort(nums,mid+1,high);
        cnt+=countingpair(nums,low,mid,high);
        merge(nums,low,mid,high);
        return cnt;
    }
public:
    int reversePairs(vector<int>& nums) {
         int n=nums.size()-1;
        return mergeshort(nums,0,n);
    }
};