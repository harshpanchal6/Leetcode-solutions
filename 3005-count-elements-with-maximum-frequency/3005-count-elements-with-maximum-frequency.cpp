class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        unordered_map<int,int>hash;
        for(int i : nums){
            hash[i]++;
            maxi=max(maxi,hash[i]);
        }
        int ans=0;
        for(auto &i: hash){
            if(i.second==maxi){
                ans=ans+i.second;
            }
        }
        return ans;
        
    }
};