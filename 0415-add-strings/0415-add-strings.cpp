class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int n=num1.size()-1;
        int m=num2.size()-1;
        string ans="";
        int carry=0;
        
        while(n>=0 ||m>=0){
            int sum=carry;
            if(n>=0){
                sum+=(num1[n--]-'0');
            }
            if(m>=0){
                sum+=(num2[m--]-'0');
            }
            carry=sum/10;
            ans += (sum % 10) + '0';
        }
        if(carry) ans += carry + '0';
        reverse(ans.begin(),ans.end());
        return ans;

    }
};