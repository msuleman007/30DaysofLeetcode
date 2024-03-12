class Solution {
public:
    bool isPalindrome(int x) {
        int ogX = x;
        long revNo = 0;
        while( x> 0){
            int lastDig = x%10;
            revNo = revNo * 10 +lastDig;
            x/=10;
        }
        return ogX == revNo;
    }
};