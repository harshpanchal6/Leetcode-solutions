class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> window;
        
        int left = 0, right = 0;
        int maxLen = 0;
        
        while (right < n) {
            // If char already exists, shrink window
            while (window.count(s[right])) {
                window.erase(s[left]);
                left++;
            }
            
            // Add current char and expand window
            window.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        
        return maxLen;
    }
};
