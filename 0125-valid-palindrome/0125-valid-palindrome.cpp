class Solution {
public:
    bool isPalindrome(string s) {
         for (char &ch : s) {
        ch = std::tolower(ch);
    }
    bool t=true;
    string temp;

    for(int i=0;i<s.size();i++){
        if((s.at(i)>=97 && s.at(i)<=122) || (s.at(i)>=48 && s.at(i)<=57)){
            temp.push_back(s.at(i));
        }
    }

      string semp = temp;  
     reverse(semp.begin(), semp.end());  

        return semp == temp;

    }
};