class Solution {
public:
    bool isPalindrome(int x) {
       string s = to_string(x);
       vector <char> xS;
       for(char c: s){
            xS.push_back(c);
       }
       vector <char> rev = xS;
       reverse(rev.begin(),rev.end());
       return rev == xS;
    }
};