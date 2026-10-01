class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(auto &str:strs){
            for(auto &ch:str){
                res+=ch;
            }
            res.push_back((char)0xFFFFFF);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==((char)0xFFFFFF)){
                res.push_back(ans);
                ans="";
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return res;
    }
};
