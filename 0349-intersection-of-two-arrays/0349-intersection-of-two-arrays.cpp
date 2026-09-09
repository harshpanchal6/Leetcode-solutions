class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;

        for(int i:nums1){
            s1.insert(i);
        }
        for(int i:nums2){
            s2.insert(i);
        }

        vector<int> v1(s1.begin(), s1.end());
        vector<int> v2(s2.begin(), s2.end());

        vector<int> ans;
        int i = 0, j = 0;
        
        // 2. Your exact Two-Pointer logic now works safely!
        while(i < v1.size() && j < v2.size()){
            if(v1[i] > v2[j]){
                j++;
            }
            else if(v1[i] < v2[j]){
                i++;
            }
            else{
                ans.push_back(v1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};