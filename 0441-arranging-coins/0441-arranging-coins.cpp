class Solution {
public:
    int arrangeCoins(int n) {
        long long low=1,high=n;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long coinsneeded=(mid*(mid+1))/2;

            if(coinsneeded==n){
                return mid;
            }
            else if(coinsneeded>n){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return high;
    }
};