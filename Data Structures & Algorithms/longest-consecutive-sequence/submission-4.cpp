class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int result=0;
        unordered_set<int> sequence;
        for(int i=0;i<nums.size();i++){
            sequence.insert(nums[i]);
        }
        for(int num: nums){
            if(sequence.find(num-1)==sequence.end()){
            int streak =0;int curr=num;
            while(sequence.find(curr)!=sequence.end()){
                streak++;
                curr++;
            }
            result= max(result,streak);
        }
        }
        return result;
    }
};
