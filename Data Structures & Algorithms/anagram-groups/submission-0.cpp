class Solution {
public:
    string genrate(string & word){
        int arr[26]={0};
        for(char &ch: word){
            arr[ch-'a']++;
        }
        string newword="";
        for(int i=0;i<26;i++){
           int freq=arr[i];
           if(freq>0){
            newword+=string(freq,i+'a');
           }
        }
        return newword;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> result;
        unordered_map<string,vector<string>> mp;
        for(auto & it: strs){
            string one=it;
            string new_word=genrate(one);
            mp[new_word].push_back(one);
        }
        for(auto it: mp){
            result.push_back(it.second);
        }
        return result;;
    }
};
