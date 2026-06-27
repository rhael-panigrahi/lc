class Solution {
public:
    int reverse(int x) {
        int y=x;
        int reversed=0;
        while(y!=0){
            int digit= y%10;
            if((reversed == INT_MAX/10 && digit >7)||(reversed == INT_MIN/10 && digit < -8))return 0;
            else if(reversed > INT_MAX/10 || reversed < INT_MIN/10){
                return 0;
            }
            reversed = reversed*10 + digit;
            y=y/10;
        }
        return reversed;
    }
};