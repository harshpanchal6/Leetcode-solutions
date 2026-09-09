class Solution {
private:

vector<int>pascle(int r){
    vector<int>ans(r);
    ans[0]=1;
    for(int i=1;i<r;i++){
        ans[i]=(ans[i-1]*(r-i))/i;
    }
    return ans;
}
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=1;i<=numRows;i++){
            ans.push_back(pascle(i));
        }
        return ans;
    }
};