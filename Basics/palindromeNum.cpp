class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long copy =x;
        long long revNum =0;
        while(x>0){
            long long num = x%10;
            revNum = (revNum *10)+num;
            x=x/10;
        }
        if(revNum == copy){
            return true;
        }
        return false;
    }
};
