class Solution {
private:
    void genrate(int open , int close , int n , string s , vector<string>&ans){
        if(open == close && s.size() == 2*n){
            ans.push_back(s);
        }

        if(open < n){
            genrate(open+1 , close , n , s+'(' , ans);
        }
        if(close < open){
            genrate(open , close+1 , n , s+')' , ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        genrate(0 , 0 , n , "" , ans);
        return ans;
    }
};