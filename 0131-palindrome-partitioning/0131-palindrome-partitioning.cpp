class Solution {
private:
    bool check(string s , int left ,int right){
        while(left <= right){
            if(s[left++] != s[right--]){
                return false;
            } 
        }
        return true;
    }
    void genrate(int ind , string s , int  n , vector<vector<string>>&ans , vector<string>&temp){
        if(ind == n){
            ans.push_back(temp);
            return ;
        }

        for(int i = ind ; i < n ; i++){
            if(check(s , ind , i)){
                temp.push_back(s.substr(ind, i-ind+1));
                genrate(i+1 , s , n , ans , temp);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        genrate(0 , s , s.length() , ans , temp );
        return ans;
    }
};