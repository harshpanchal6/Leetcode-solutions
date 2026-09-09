class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        int n=columnNumber;
        while(n>0){
            n--;
            ans+=(n%26)+'A';
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};