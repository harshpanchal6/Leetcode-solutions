class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>hash;
        int n=magazine.size();
        for(int i=0;i<n;i++){
            hash[magazine[i]]++;
        }
        int m=ransomNote.size();
        for(int i=0;i<m;i++){
            if(hash[ransomNote[i]]==0){
                return false;
            }
            hash[ransomNote[i]]--;
        }
        return true;
    }
};