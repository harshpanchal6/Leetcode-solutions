class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int sum=0;

        int rem=0;
        while(n!=0){
            rem=n%10;
            p=p*rem;
            sum=sum+rem;
            n=n/10;
        }
        int ans=p-sum;
        return ans;
    }
};