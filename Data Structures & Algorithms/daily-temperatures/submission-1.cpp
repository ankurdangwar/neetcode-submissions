class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<pair<int,int>> ans;//{temp,index}
        for(int i=0;i<temperatures.size();i++){
            int t= temperatures[i];
            while(!ans.empty() && t> ans.top().first){
                auto pair1=ans.top();
                ans.pop();
                res[pair1.second]=i-pair1.second;
            }
            ans.push({t,i});
        }
        return res;
    }
};
