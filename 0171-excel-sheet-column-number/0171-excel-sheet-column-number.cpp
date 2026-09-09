class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int n=columnTitle.size()-1;
        int count=0;
        while(n>=0){
            ans=ans+pow(26,count++)*(columnTitle[n]-'A'+1);
            n--;
        }
        return ans;
    }
};