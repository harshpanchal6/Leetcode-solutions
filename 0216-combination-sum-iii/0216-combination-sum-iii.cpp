class Solution {
private:
    void combinationSum(int last, int size, int target, vector<int> &temp, vector<vector<int>> &ans){
        if(target == 0 && temp.size() == size){
            ans.push_back(temp);
            return;
        }
        if(temp.size() > size || target <= 0){
            return;
        }

        for(int i=last ; i<=9 ; i++){
            if(i <= target){
                temp.push_back(i);
                combinationSum(i+1, size, target-i, temp, ans);
                temp.pop_back();
            }
            else   break;
        }
    }
public:
    vector<vector<int> > combinationSum3(int k, int n) {
    	vector<vector<int>> ans;
        vector<int> temp;
        combinationSum(1, k, n, temp, ans);
        return ans;
    }
};