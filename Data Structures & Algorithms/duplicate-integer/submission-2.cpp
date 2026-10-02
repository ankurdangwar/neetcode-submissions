class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     unordered_set<int> answer(nums.begin(),nums.end());
     return answer.size()<nums.size();
    }
};