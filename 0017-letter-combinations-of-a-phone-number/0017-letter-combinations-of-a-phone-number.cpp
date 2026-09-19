class Solution {
private:
    void genrate(int ind , string digits , vector<string>mp , vector<string>&ans , string &temp , int n){
        if(ind == n){
            ans.push_back(temp);
            return ;
        }
        
        int number = digits[ind] - '0';
        string s = mp[number];

        for(int i = 0 ; i < s.size() ; i++){
            temp.push_back(s[i]);
            genrate(ind+1 , digits , mp , ans , temp, n);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>mp = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
        vector<string>ans;
        string temp = "";
        genrate(0 , digits , mp , ans , temp , digits.length());
        return ans;
    }
};