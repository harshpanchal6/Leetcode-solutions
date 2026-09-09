 


 
class Solution {
public:
    // helper function to expand around center
    string expandAroundCenter(string &s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        // after loop, valid palindrome is s[left+1 ... right-1]
        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        string best = s.substr(0, 1); // at least one character
        
        for (int i = 0; i < s.size(); i++) {
            // odd length palindrome
            string odd = expandAroundCenter(s, i, i);
            
            // even length palindrome
            string even = expandAroundCenter(s, i, i + 1);
            
            // choose longer
            string longer = (odd.size() > even.size()) ? odd : even;
            
            if (longer.size() > best.size()) {
                best = longer;
            }
        }
        return best;
    }
};