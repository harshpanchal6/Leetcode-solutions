class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long num = 0;
        int sign = 1;

        // 1. Ignore leading spaces
        while (i < n && s[i] == ' ') i++;

        // 2. Handle sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits
        while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            // 4. Check overflow
            if (num * sign > INT_MAX) return INT_MAX;
            if (num * sign < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(num * sign);
    }
};
