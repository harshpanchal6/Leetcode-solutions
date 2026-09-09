class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size()){
            return s;
        }

        vector<string>l(min(numRows, int(s.size())));
        int curr=0;
        bool go=false;

        for(char c: s){
            l[curr]=l[curr]+c;
            if(curr==0 || curr==numRows-1){
                go=!go;
            }
            if(go){
                curr=curr+1;
            }
            else{
                curr=curr-1;
            }
        }

        string result;

        for(string row: l){
            result=result+row;
        }
        return result;

    }
};