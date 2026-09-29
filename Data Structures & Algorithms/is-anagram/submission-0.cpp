class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        unordered_map<char,int> ans;
        unordered_map<char,int> ans1;
        for(int i=0;i<n;i++){
            ans[s[i]]++;
            ans1[t[i]]++;
        }
        for(int i=0;i<m;i++){
           if( ans[s[i]]!=ans1[s[i]]){
            return false;
           }
        }
        return true;
    }
};
