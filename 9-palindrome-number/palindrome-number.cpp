class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        int reversed=0;
        if(y<0)return false;
        while(y!=0){
            int digit=y%10;
            if(reversed==INT_MAX/10 && digit>7 || reversed > INT_MAX/10)return false;
            else{
                reversed = reversed * 10+digit;
            }
            y=y/10;
        }
        if(reversed==x)return true;
        else return false;
    }
};