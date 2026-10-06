class Solution {
public:
    bool isPalindrome(string s) {
        string solu="";
        for(char c:s){
            if(isalnum(c)){
                solu+=tolower(c);
            }
        }
        return solu == string(solu.rbegin(),solu.rend());
    }
};
