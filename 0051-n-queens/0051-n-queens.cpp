class Solution {
private:
    bool itspossible(int row , vector<string>&list , int col , int n){
        int r = row , c = col;
        while(r >= 0  && c >= 0){
            if(list[r--][c--] == 'Q'){
                return false;
            }
        }
        r = row;
        c = col;
        while(r>=0){
            if(list[r--][c] == 'Q'){
                return false;
            }
        }
        r = row;
        c = col;

        while(r>=0 && c <n){
            if(list[r--][c++] == 'Q'){
                return false;
            }
        }

        return true;
        
    }
    void genrate(int row , int  n , vector<vector<string>>&ans , vector<string>&list){
        if(row == n){
            ans.push_back(list);
            return ;
        }

        for(int i = 0 ; i < n ; i++){
            if(itspossible(row , list , i , n)){
                list[row][i] = 'Q';
                genrate(row+1 , n , ans , list);
                list[row][i] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>list(n, string(n,'.'));

        genrate(0 , n , ans , list);
        return ans;
    }
};