class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        int r = rowIndex + 1;
        vector<int> ans(r);
        ans[0] = 1;

        for(int i = 1; i < r; i++) {
            long long val = (1LL * ans[i-1] * (r - i)) / i;
            ans[i] = val;
        }

        return ans;
    }
};