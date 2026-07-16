class Solution {
public:
    int reverse(int x) {
        int  last = 0;
        while (x != 0){
            int sum = x%10;
             x/=10;
             if (last > INT_MAX / 10 || last  < INT_MIN / 10){
                return 0;
             }
             last = last * 10 + sum;
             
        }
        return last;
    }
};