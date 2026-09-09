class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
         priority_queue<int>p;
        int sum=0;

        for(int i : piles){
            p.push(i);
            sum=sum+i;
        }

        while(k--){
            int x=p.top();
            p.pop();
            
            sum=sum-=x;
            int reduced=x-x/2;

            sum+=reduced;
            p.push(reduced);
        }
        return sum;
    }
};