class Solution {
public:
    string largestOddNumber(string num) {
        string s=num;
         int st = -1;
        int e = -1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                st = i;
                break;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1 && i >= st) {
                e = i;
                break;
            }
        }

        if (st == -1 || e == -1 || e < st) {
            return "";
        }

        return s.substr(st, e - st + 1);
    }
};