class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                return nums[i];
            }
        }
        return -1;
    }

private:
    // Static initializer for fast IO (runs before main)
    static const int init;
};

// Definition outside class
const int Solution::init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
