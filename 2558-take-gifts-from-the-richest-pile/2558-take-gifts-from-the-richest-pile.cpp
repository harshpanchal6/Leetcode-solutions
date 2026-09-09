class Solution {
private :

    int squareroot(int x) {
        int low = 1, high = x, ans = 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid <= x / mid) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }

public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        int n=gifts.size();
        priority_queue<int>p;
        long long sum=0;

        for(int i : gifts){
            p.push(i);
            sum+=i;
        }

        while(k--){
            int x=p.top();
            p.pop();

            int reduce=squareroot(x);

            sum-=x;
            sum+=reduce;
            p.push(reduce);
        }
        return sum;
    }
};