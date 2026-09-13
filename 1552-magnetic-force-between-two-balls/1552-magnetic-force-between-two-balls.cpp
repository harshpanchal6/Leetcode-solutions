class Solution {
private:
    bool ifpossible(vector<int>&position , int distance , int m){
        int count = 1;
        int last = position[0];

        for(int i = 0; i < position.size(); i++){
            if(position[i]-last >= distance){
                count++;
                last = position[i];
            }
            if(count >= m){
                return true;
            }
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        if(m > n){
            return 0;
        }
        sort(position.begin(),position.end());
        int low = 0;
        int  high = position[n-1]-position[0];

        int ans = 0;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(ifpossible(position , mid , m)){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};