class Solution {
   private:
    bool isExists(vector<vector<char> >& board, string word, int i, int j,
                  int size) {
        if (size == word.length()) {
            return true;
        }

        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() ||
            board[i][j] != word[size]) {
            return false;
        }

        char ch = board[i][j];
        board[i][j] = ' ';

        bool ans = false;

        ans |= isExists(board, word, i + 1, j, size + 1);
        ans |= isExists(board, word, i - 1, j, size + 1);
        ans |= isExists(board, word, i, j + 1, size + 1);
        ans |= isExists(board, word, i, j - 1, size + 1);

        board[i][j] = ch;
        return ans;
    }

   public:
    bool exist(vector<vector<char> >& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (isExists(board, word, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};