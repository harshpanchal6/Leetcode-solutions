class Solution {
public:
    int hammingWeight(int n) {
        if(n==0){
            return 0;
        }
        int num=n;
        int count=0;

        while(num!=1){
            if(num%2==1){
                count++;
            }
            num=num/2;
        }
        count++;
        return count;
    }
};