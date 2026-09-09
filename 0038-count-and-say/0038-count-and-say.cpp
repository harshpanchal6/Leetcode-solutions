class Solution {
public:
    string add1(string& s) {
        int count = 1;
        string t;
        
        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && s[i] == s[i + 1]) {
                count++;
            } else {
                t += to_string(count); // append count
                t += s[i];            // append digit
                count = 1;            // reset counter
            }
        }
        s = t;
        return s;
    }

    string countAndSay(int n) {
        string s = "1";
        for (int i = 2; i <= n; i++) {
            add1(s);
        }
        return s;
    }
};
