class Solution {
private:
        bool isvowels(char s){
            if((s=='a'|| s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')){
                return true;
            }
            return false;
        }
public:
    string reverseVowels(string s) {
        
        int right=s.size()-1;
        int left=0;
        
        while(left<right){
            if(isvowels(s[left])&&isvowels(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(!isvowels(s[left])){
                left++;
            }
            else{
                right--;
            }
        }
        return s;
    }
};