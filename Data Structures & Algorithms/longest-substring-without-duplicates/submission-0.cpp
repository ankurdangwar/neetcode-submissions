class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        if(s.size()==0) return 0;
        int i=0;
        int j=0;
        int count =0;
        int maxCount=0;
          unordered_map<int,int> mp;
          
        while(j< s.size() ){
           mp[s[j]]++;
           while(mp[s[j]]>1){
            mp[s[i]]--;
            i++;
           }
            maxCount= max(maxCount,j-i+1);
            j++;

        }
        return maxCount;
    }
};
