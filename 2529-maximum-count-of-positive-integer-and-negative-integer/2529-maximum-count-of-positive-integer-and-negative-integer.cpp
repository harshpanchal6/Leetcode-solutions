class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int negCount = 0, posCount = 0;

        int left = 0, right = n - 1, firstPositive = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > 0) {
                firstPositive = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        left = 0, right = n - 1;
        int firstZero = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= 0) {
                firstZero = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        negCount = firstZero;
        posCount = n - firstPositive;

        return max(negCount, posCount);
    }
};
