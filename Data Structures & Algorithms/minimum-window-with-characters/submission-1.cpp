class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()==0){
            return "";
        }
        unordered_map<char,int> countt,window;
        for(int i=0;i<t.size();i++){
            countt[t[i]]++;
        }
        int have=0,need=countt.size();
        pair<int,int> res={-1,-1};
        int result=INT_MAX;
        int l=0;int r=0;
        for(int r=0;r<s.length();r++){
            char c=s[r];
            window[c]++;
            if(countt.count(c) && window[c]==countt[c]){
                have++;
            }
            while(have==need){
                if((r-l+1)<result){
                    result=r-l+1;
                    res={l,r};
                }
                window[s[l]]--;
                if(countt.count(s[l]) && window[s[l]]<countt[s[l]]){
                   have--; 
                }
                l++;
            }
        }
        return result ==INT_MAX?"":s.substr(res.first,result);
        
    }
};
