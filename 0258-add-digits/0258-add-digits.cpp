class Solution {
private:
    int sumofall(int num){
        int sum = 0;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int add(int num){
        if(num < 10){
            return num;
        }
        return add(sumofall(num));
    }
public:
    int addDigits(int num) {
        return add(num);
    }
};