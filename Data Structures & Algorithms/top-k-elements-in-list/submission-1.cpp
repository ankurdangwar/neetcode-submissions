class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(const auto& [num,count]:ans){
            freq[count].push_back(num);
        }
        vector<int> result;
        for(int count=nums.size();count >= 1;count--){
            for(int num:freq[count]){
                result.push_back(num);
                if(result.size()==k){
                    return result;
                }
            }
        }
        return result;
    }
};
